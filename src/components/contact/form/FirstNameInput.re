open FormStyles;

let titles: DropdownType.dropdownOptions = [|
  {label: "None", value: ""},
  {label: "Mr", value: "Mr"},
  {label: "Mrs", value: "Mrs"},
  {label: "Miss", value: "Miss"},
|];

[@react.component]
let make =
    (
      ~firstNamevalue: string,
      ~titleValue: DropdownType.dropdownOption,
      ~onTitleChange: DropdownType.dropdownOption => unit,
      ~onFirstNameChange: ReactEvent.Form.t => unit,
      ~onBlur: 'bool,
      ~titleResult,
      ~firstNameResult,
      ~placeholder: string="John",
      ~type_: string="text",
    ) =>
  <div className="field ">
    <label className="label"> {React.string("First Name")} </label>
    <div className="field-body is-grouped">
      <div className={selectFieldStyles(titleResult)}>
        <SelectDropdown
          options=titles
          placeholder="None"
          value=titleValue
          instanceId="title"
          onChange=onTitleChange
        />
      </div>
      <div className="field">
        <input
          id="firstName"
          placeholder
          className={inputFieldStyles(firstNameResult)}
          type_
          value=firstNamevalue
          onBlur
          onChange=onFirstNameChange
        />
        {switch (firstNameResult) {
         | Some(Belt.Result.Error(message)) =>
           <div className="help is-danger" name="errormessage">
             message->React.string
           </div>
         | Some(Ok(_)) => React.null
         | None => React.null
         }}
      </div>
    </div>
  </div>;

let default = make;
open FormStyles;
open ContainerType;

let states: DropdownType.dropdownOptions = [|
  {label: "New South Wales", value: "NSW"},
  {label: "Victoria", value: "VIC"},
  {label: "Queensland", value: "QLD"},
  {label: "Western Australia", value: "WA"},
  {label: "South Australi", value: "SA"},
  {label: "Tasmania", value: "TAS"},
|];

[@react.component]
let make = (~config: container, ~value, ~result, ~onChange) =>
  <div className="column">
    <div className="field ">
      <label className="label"> {React.string(config.label)} </label>
      <div className="field-body ">
        <div className={selectFieldStyles(result)}>
          <SelectDropdown
            options=states
            placeholder={config.placeholder}
            value
            instanceId={config.inputId}
            onChange
          />
        </div>
      </div>
      {switch (result) {
       | Some(Belt.Result.Error(message)) =>
         <div className="help is-danger" name="errormessage">
           message->React.string
         </div>
       | Some(Ok(_)) => React.null
       | None => React.null
       }}
    </div>
  </div>;

let default = make;
open FormStyles;
[@react.component]
let make =
    (
      ~inputId: string,
      ~value: string,
      ~onChange,
      ~onBlur: 'bool,
      ~result,
      ~label: string,
      ~placeholder: string="",
      ~type_: string="text",
    ) => {
  let classNames =
    type_ === "checkbox" ? checkboxStyle(result) : inputFieldStyles(result);

  <div className="field is-horizontal">
    <div className="field-label is-normal">
      <label className=labelStyle> label->React.string </label>
    </div>
    <div className="field-body">
      <div className="field">
        <input
          id=inputId
          placeholder
          className=classNames
          type_
          value
          onBlur
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
  </div>;
};
let default = make;
open FormStyles;

[@react.component]
let make =
    (
      ~inputId: string,
      ~value: string,
      ~onChange: ReactEvent.Form.t => unit,
      ~onBlur: 'bool,
      ~result,
      ~placeholder: string,
      ~label: string,
    ) =>
  <div className="field">
    <label className="label"> label->React.string </label>
    <div className="field-body">
      <div className="field">
        <div className="control">
          <textarea
            id=inputId
            className={textareaFieldStyles(result)}
            placeholder
            type_="text"
            value
            onBlur
            onChange
          />
        </div>
      </div>
    </div>
    {switch (result) {
     | Some(Belt.Result.Error(message)) =>
       <div className="help is-danger"> message->React.string </div>
     | Some(Ok(_)) => React.null
     | None => React.null
     }}
  </div>;

let default = make;
open FormStyles;

[@react.component]
let make = (~valid: 'bool, ~reset: 'unit) => {
  <div className="field is-grouped is-pulled-right">
    <div className=buttonStyle>
      <button
        className="button is-link is-danger is-light" onClick={_ => reset()}>
        "Cancel"->React.string
      </button>
    </div>
    <div className=buttonStyle>
      <button className="button is-link is-warning is-light" disabled={!valid}>
        <span> "Save"->React.string </span>
      </button>
    </div>
  </div>;
};
let default = make;
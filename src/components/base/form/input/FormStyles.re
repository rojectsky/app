open Css;

let getFieldStateStyle = fieldState =>
  switch (fieldState) {
  | Some(Belt.Result.Error(_)) => "is-danger"
  | Some(Ok(Formality.Valid)) => "is-success"
  | Some(Ok(Formality.NoValue)) => ""
  | None => ""
  };

let inputFieldStyles = fieldState => {
  merge(["input", getFieldStateStyle(fieldState)]);
};
let checkboxStyle = fieldState => getFieldStateStyle(fieldState);

let textareaFieldStyles = fieldState => {
  merge(["textarea", getFieldStateStyle(fieldState)]);
};

let selectFieldStyles = fieldState => {
  merge(["field", getFieldStateStyle(fieldState)]);
};

let sectionTitleStyles =
  merge(["title", style([color(rgb(232, 95, 88))])]);

let labelStyle =
  merge(["label", style([width(px(150)), textAlign(`left)])]);

let buttonStyle =
  merge([
    "field",
    style([marginTop(px(10)), marginRight(px(10)), textAlign(`center)]),
  ]);
type containerType =
  | Text
  | Dual
  | TextArea
  | CheckBox
  | Select;

type container = {
  containerType,
  type_: string,
  label: string,
  inputId: string,
  placeholder: string,
};
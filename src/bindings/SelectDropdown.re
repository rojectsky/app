[@bs.module "react-select"] [@react.component]
external make:
  (
    ~options: 'a,
    ~className: string=?,
    ~placeholder: string=?,
    ~value: 'b,
    ~instanceId: string,
    ~onChange: DropdownType.dropdownOption => unit
  ) =>
  React.element =
  "default";

let default = make;
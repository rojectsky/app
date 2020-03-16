open ContactModalStyles;

[@react.component]
let make =
    (~field1: string, ~value1: string, ~field2: string="", ~value2: string="") =>
  <div className="columns ">
    <ContactModalText className=labelStyles text=field1 />
    <ContactModalText className=valueStyles text=value1 />
    <ContactModalText className=labelStyles text=field2 />
    <ContactModalText className=valueStyles text=value2 />
  </div>;

let default = make;
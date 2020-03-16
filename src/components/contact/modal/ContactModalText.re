open ContactModalStyles;
let str = React.string;

[@react.component]
let make = (~text: string, ~className) => <div className> text->str </div>;

let default = make;
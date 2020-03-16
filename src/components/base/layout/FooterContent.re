open FooterStyles;
let str = React.string;

[@react.component]
let make = (~content) => {
  <div className=footerColumnStyles> <a> content->str </a> </div>;
};

let default = make;
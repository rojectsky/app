open FormStyles;
[@react.component]
let make = (~title: string) =>
  <div className=sectionTitleStyles>
    <p className=sectionTitleStyles> title->ReasonReact.string </p>
  </div>;

let default = make;
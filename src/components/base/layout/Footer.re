open FooterStyles;
let str = React.string;

[@react.component]
let make = () => {
  <footer className=footerStyles>
    <div className=footerColumnsStyles>
      <FooterContent content="@Crunch Accounting All right reserved" />
      <FooterContent content="Privacy Policy" />
      <FooterContent content="Terms of Service" />
    </div>
  </footer>;
};
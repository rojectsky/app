open ContactType;
open ContactModalStyles;
let str = React.string;

[@react.component]
let make = (~contact: contactType, ~onModalClose) =>
  <div className="modal is-active">
    <div className="modal-background" />
    <div className="modal-card">
      <header className=modalHeaderStyles>
        <div className="container">
          <div className="columns ">
            <div className="column is-11">
              <div className="modal-card-title">
                "Saved"->str
                <a className=checkIconStyles>
                  <FontAwesomeIcon color="green" icon="check" />
                </a>
              </div>
              <div className=saveMessageStyles>
                "The contact details has been saved"->str
              </div>
            </div>
            <div className="column is-one-quarter">
              <button className="delete" onClick={_ => onModalClose()} />
            </div>
          </div>
        </div>
      </header>
      <section className="modal-card-body">
        <SectionTitle title="Contact Information" />
        <ContactModalRow
          field1={ContactFormConfig.FirstNameField.inputContainer.label}
          value1={contact.firstName}
          field2={ContactFormConfig.LastNameField.inputContainer.label}
          value2={contact.firstName}
        />
        <ContactModalRow
          field1={ContactFormConfig.AccountField.inputContainer.label}
          value1={contact.account}
          field2={ContactFormConfig.CompanyField.inputContainer.label}
          value2={contact.company}
        />
        <ContactModalRow
          field1={ContactFormConfig.PhoneField.inputContainer.label}
          value1={contact.phone}
          field2={ContactFormConfig.FaxField.inputContainer.label}
          value2={contact.fax}
        />
        <ContactModalRow
          field1={ContactFormConfig.CompanyTitleField.inputContainer.label}
          value1={contact.company}
          field2={ContactFormConfig.EmailField.inputContainer.label}
          value2={contact.email}
        />
        <ContactModalRow
          field1={ContactFormConfig.EmailOpField.inputContainer.label}
          value1={contact.emailOp}
        />
        <SectionTitle title="Address Information" />
        <ContactModalRow
          field1={ContactFormConfig.StreetField.inputContainer.label}
          value1={contact.street}
          field2={ContactFormConfig.CityField.inputContainer.label}
          value2={contact.city}
        />
        <ContactModalRow
          field1={ContactFormConfig.StateField.inputContainer.label}
          value1={contact.state_.value}
        />
        <SectionTitle title="Description Information" />
        <ContactModalRow
          field1={ContactFormConfig.DescriptionField.inputContainer.label}
          value1={contact.description}
        />
      </section>
    </div>
  </div>;

let default = make;
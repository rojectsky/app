open Formality;
open StateType;
open ContactType;
open ContainerType;
type field =
  | Title
  | FirstName
  | LastName
  | Account
  | Company
  | Phone
  | Fax
  | CompanyTitle
  | Email
  | EmailOp
  | Street
  | City
  | State
  | Postcode
  | Description;

type state = stateType;

type message = string;
type submissionError = unit;

module TitleField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      title: value,
    },
  };

  let validator = {
    field: Title,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {title}}: stateType) =>
      switch (title) {
      | _ => Ok(Valid)
      },
  };

  let inputContainer: container = {
    containerType: Select,
    label: "Title",
    type_: "text",
    inputId: "Title",
    placeholder: "title",
  };
};

module FirstNameField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      firstName: value,
    },
  };

  let validator = {
    field: FirstName,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {firstName}}: stateType) =>
      switch (firstName) {
      | "" => Error("FirstName is required")
      | _ => Ok(Valid)
      },
  };
  let inputContainer: container = {
    containerType: Text,
    label: "First Name",
    type_: "text",
    inputId: "FirstName",
    placeholder: "John",
  };
};

module LastNameField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      lastName: value,
    },
  };

  let validator = {
    field: LastName,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {lastName}}: stateType) =>
      switch (lastName) {
      | "" => Error("LastName is required")
      | _ => Ok(Valid)
      },
  };
  let inputContainer: container = {
    containerType: Text,
    label: "Last Name",
    type_: "text",
    inputId: "LastName",
    placeholder: "Smith",
  };
};

module AccountField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      account: value,
    },
  };

  let validator = {
    field: Account,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {account}}: stateType) =>
      switch (account) {
      | "" => Error("Account name is required")
      | _ => Ok(Valid)
      },
  };
  let inputContainer: container = {
    containerType: Text,
    label: "Account Name",
    type_: "text",
    inputId: "Account",
    placeholder: "John's joinery",
  };
};

module CompanyField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      company: value,
    },
  };

  let validator = {
    field: Company,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {company}}: stateType) =>
      switch (company) {
      | _ => Ok(Valid)
      },
  };
  let inputContainer: container = {
    containerType: Text,
    label: "Company Name",
    type_: "text",
    inputId: "Company",
    placeholder: "John's Company",
  };
};

module PhoneField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      phone: value,
    },
  };
  let regx = [%re "/^(?=.*\d)[\d ]+$/"];
  let validator = {
    field: Phone,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {phone}}: stateType) => {
      switch (phone) {
      | "" => Error("Phone is required")
      | _ =>
        phone->(Js.Re.test(regx))
          ? Ok(Valid) : Error("Invalid Phone, please put numbers only")
      };
    },
  };
  let inputContainer: container = {
    containerType: Text,
    label: "Phone",
    type_: "text",
    inputId: "Phone",
    placeholder: "02 9999 9999",
  };
};

module FaxField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      fax: value,
    },
  };

  let validator = {
    field: Fax,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {fax}}: stateType) =>
      switch (fax) {
      | _ => Ok(Valid)
      },
  };
  let inputContainer: container = {
    containerType: Text,
    label: "Fax  ",
    type_: "text",
    inputId: "Fax",
    placeholder: "John's Fax",
  };
};

module CompanyTitleField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      companyTitle: value,
    },
  };

  let validator = {
    field: CompanyTitle,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {companyTitle}}: stateType) =>
      switch (companyTitle) {
      | _ => Ok(Valid)
      },
  };
  let inputContainer: container = {
    containerType: Text,
    label: "Title",
    type_: "text",
    inputId: "CompanyTitle",
    placeholder: "Owner",
  };
};

module EmailField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      email: value,
    },
  };
let regx = [%re "/^\w+@[a-zA-Z_]+?\.[a-zA-Z]{2,3}$/"];
  let validator = {
    field: Email,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {email}}: stateType) =>
      switch (email) {
      | "" => Error("Email is required")
      | _ => email->(Js.Re.test(regx))
                       ? Ok(Valid) : Error("Invalid Email")
      },
  };
  let inputContainer: container = {
    containerType: Text,
    label: "Email ",
    type_: "email",
    inputId: "Email",
    placeholder: "John's Email",
  };
};

module EmailOpField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      emailOp: value,
    },
  };

  let validator = {
    field: EmailOp,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {emailOp}}: stateType) =>
      switch (emailOp) {
      | _ => Ok(Valid)
      },
  };
  let inputContainer: container = {
    containerType: Text,
    label: "Email Opt Out",
    type_: "checkbox",
    inputId: "EmailOp",
    placeholder: "",
  };
};

module StreetField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      street: value,
    },
  };

  let validator = {
    field: Street,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {street}}: stateType) =>
      switch (street) {
      | "" => Error("Street is required")
      | _ => Ok(Valid)
      },
  };
  let inputContainer: container = {
    containerType: Text,
    label: "Street ",
    type_: "text",
    inputId: "Street",
    placeholder: "John's Street",
  };
};

module CityField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      city: value,
    },
  };

  let validator = {
    field: City,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {city}}: stateType) =>
      switch (city) {
      | "" => Error("City is required")
      | _ => Ok(Valid)
      },
  };
  let inputContainer: container = {
    containerType: Text,
    label: "City ",
    type_: "text",
    inputId: "City",
    placeholder: "John's City",
  };
};

module StateField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      state_: value,
    },
  };

  let validator = {
    field: State,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {state_}}: stateType) =>
      switch (state_.value) {
      | "" => Error("State is required")
      | _ => Ok(Valid)
      },
  };
  let inputContainer: container = {
    containerType: Select,
    label: "State ",
    type_: "text",
    inputId: "State",
    placeholder: "Search State or territory",
  };
};

module PostcodeField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      postcode: value,
    },
  };

  let validator = {
    field: Postcode,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {postcode}}: stateType) =>
      switch (postcode) {
      | "" => Error("Postcode is required")
      | _ => Ok(Valid)
      },
  };
  let inputContainer: container = {
    containerType: Text,
    label: "Postcode ",
    type_: "text",
    inputId: "Postcode",
    placeholder: "John's Postcode",
  };
};

module DescriptionField = {
  let update = (state: stateType, value) => {
    contact: {
      ...state.contact,
      description: value,
    },
  };

  let validator = {
    field: Description,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({contact: {description}}: stateType) =>
      switch (description) {
      | "" => Error("Description is required")
      | _ => Ok(Valid)
      },
  };
  let inputContainer: container = {
    containerType: TextArea,
    label: "Description ",
    type_: "text",
    inputId: "Description",
    placeholder: "John's Description",
  };
};

let validators = [
  TitleField.validator,
  FirstNameField.validator,
  LastNameField.validator,
  AccountField.validator,
  CompanyField.validator,
  PhoneField.validator,
  FaxField.validator,
  CompanyTitleField.validator,
  EmailField.validator,
  EmailOpField.validator,
  StreetField.validator,
  CityField.validator,
  StateField.validator,
  PostcodeField.validator,
  DescriptionField.validator,
];
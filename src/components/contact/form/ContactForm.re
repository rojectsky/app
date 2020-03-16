module ContactFormHook = Formality.Make(ContactFormConfig);
open ContactType;
open StateType;
open ContactFormStyle;

[@react.component]
let make = () => {
  let initialState: stateType =
    ContactFormConfig.{
      contact: {
        title: {
          value: "",
          label: "",
        },
        firstName: "",
        lastName: "",
        account: "",
        company: "",
        phone: "",
        fax: "",
        companyTitle: "",
        email: "",
        emailOp: "false",
        street: "",
        city: "",
        state_: {
          value: "",
          label: "",
        },
        postcode: "",
        description: "",
      },
    };
  let (isModalVisible, setIsModalVisible) = React.useState(() => false);

  let form =
    ContactFormHook.useForm(
      ~initialState,
      ~onSubmit=(state, form) => {
        setIsModalVisible(_ => !isModalVisible);
        ();
      },
    );
  let resetForm = () => {
    form.reset();

    //form.reset() is not working as expected... some workaround to clear the form & error message
    %bs.raw
    {| setTimeout(function(){
            Array.from(document.getElementsByClassName("is-danger")).forEach((el)=> el.classList.remove("is-danger"));
            Array.from(document.getElementsByName("errormessage")).forEach((el)=> el.innerHTML = "");
           },
        0)
     |};
  };

  <div className=containerStyles>
    <form
      id="contactForm"
      className="form"
      onSubmit={form.submit->Formality.Dom.preventDefault}>
      <div className=submitLevelStyles>
        <div className="level-left">
          <div className="level-item">
            <p className=titleStyles> "Create Contact"->ReasonReact.string </p>
          </div>
        </div>
        <div className="level-right">
          <div className="level-item">
            <Buttons valid={form.valid()} reset=resetForm />
          </div>
        </div>
      </div>
      <SectionTitle title="Contact Information" />
      <div className="columns">
        <div className="column">
          <FirstNameInput
            titleValue={form.state.contact.title}
            firstNamevalue={form.state.contact.firstName}
            onBlur={_ => form.blur(FirstName)}
            firstNameResult={FirstName->(form.result)}
            titleResult={Title->(form.result)}
            onTitleChange={(op: DropdownType.dropdownOption) =>
              form.change(
                Title,
                ContactFormConfig.TitleField.update(form.state, op),
              )
            }
            onFirstNameChange={event =>
              form.change(
                FirstName,
                ContactFormConfig.FirstNameField.update(
                  form.state,
                  event->ReactEvent.Form.target##value,
                ),
              )
            }
          />
        </div>
        <SingleInputContainer
          config=ContactFormConfig.LastNameField.inputContainer
          value={form.state.contact.lastName}
          onBlur={_ => form.blur(LastName)}
          result={LastName->(form.result)}
          onChange={event =>
            form.change(
              LastName,
              ContactFormConfig.LastNameField.update(
                form.state,
                event->ReactEvent.Form.target##value,
              ),
            )
          }
        />
      </div>
      <RowContainer
        config1=ContactFormConfig.AccountField.inputContainer
        value1={form.state.contact.account}
        onBlur1={_ => form.blur(Account)}
        result1={Account->(form.result)}
        onChange1={event =>
          form.change(
            Account,
            ContactFormConfig.AccountField.update(
              form.state,
              event->ReactEvent.Form.target##value,
            ),
          )
        }
        config2=ContactFormConfig.CompanyField.inputContainer
        value2={form.state.contact.company}
        onBlur2={_ => form.blur(Company)}
        result2={Company->(form.result)}
        onChange2={event =>
          form.change(
            Company,
            ContactFormConfig.CompanyField.update(
              form.state,
              event->ReactEvent.Form.target##value,
            ),
          )
        }
      />
      <RowContainer
        config1=ContactFormConfig.PhoneField.inputContainer
        value1={form.state.contact.phone}
        onBlur1={_ => form.blur(Phone)}
        result1={Phone->(form.result)}
        onChange1={event =>
          form.change(
            Phone,
            ContactFormConfig.PhoneField.update(
              form.state,
              event->ReactEvent.Form.target##value,
            ),
          )
        }
        config2=ContactFormConfig.FaxField.inputContainer
        value2={form.state.contact.fax}
        onBlur2={_ => form.blur(Fax)}
        result2={Fax->(form.result)}
        onChange2={event =>
          form.change(
            Fax,
            ContactFormConfig.FaxField.update(
              form.state,
              event->ReactEvent.Form.target##value,
            ),
          )
        }
      />
      <RowContainer
        config1=ContactFormConfig.CompanyTitleField.inputContainer
        value1={form.state.contact.companyTitle}
        onBlur1={_ => form.blur(CompanyTitle)}
        result1={CompanyTitle->(form.result)}
        onChange1={event =>
          form.change(
            CompanyTitle,
            ContactFormConfig.CompanyTitleField.update(
              form.state,
              event->ReactEvent.Form.target##value,
            ),
          )
        }
        config2=ContactFormConfig.EmailField.inputContainer
        value2={form.state.contact.email}
        onBlur2={_ => form.blur(Email)}
        result2={Email->(form.result)}
        onChange2={event =>
          form.change(
            Email,
            ContactFormConfig.EmailField.update(
              form.state,
              event->ReactEvent.Form.target##value,
            ),
          )
        }
      />
      <div className="columns">
        <SingleInputContainer
          config=ContactFormConfig.EmailOpField.inputContainer
          value={form.state.contact.emailOp}
          onBlur={_ => form.blur(EmailOp)}
          result={EmailOp->(form.result)}
          onChange={event =>
            form.change(
              EmailOp,
              ContactFormConfig.EmailOpField.update(
                form.state,
                event->ReactEvent.Form.target##value,
              ),
            )
          }
          isHorizontal=true
        />
        <div className="column" />
      </div>
      <SectionTitle title="Address Information" />
      <RowContainer
        config1=ContactFormConfig.StreetField.inputContainer
        value1={form.state.contact.street}
        onBlur1={_ => form.blur(Street)}
        result1={Street->(form.result)}
        onChange1={event =>
          form.change(
            Street,
            ContactFormConfig.StreetField.update(
              form.state,
              event->ReactEvent.Form.target##value,
            ),
          )
        }
        config2=ContactFormConfig.CityField.inputContainer
        value2={form.state.contact.city}
        onBlur2={_ => form.blur(City)}
        result2={City->(form.result)}
        onChange2={event =>
          form.change(
            City,
            ContactFormConfig.CityField.update(
              form.state,
              event->ReactEvent.Form.target##value,
            ),
          )
        }
      />
      <div className="columns">
        <StateInput
          config=ContactFormConfig.StateField.inputContainer
          value={form.state.contact.state_}
          result={State->(form.result)}
          onChange={(op: DropdownType.dropdownOption) =>
            form.change(
              State,
              ContactFormConfig.StateField.update(form.state, op),
            )
          }
        />
        <SingleInputContainer
          config=ContactFormConfig.PostcodeField.inputContainer
          value={form.state.contact.postcode}
          onBlur={_ => form.blur(Postcode)}
          result={Postcode->(form.result)}
          onChange={event =>
            form.change(
              Postcode,
              ContactFormConfig.PostcodeField.update(
                form.state,
                event->ReactEvent.Form.target##value,
              ),
            )
          }
        />
      </div>
      <SectionTitle title="Description Information" />
      <div className="columns">
        <div className="column">
          <SingleInputContainer
            config=ContactFormConfig.DescriptionField.inputContainer
            value={form.state.contact.description}
            onBlur={_ => form.blur(Description)}
            result={Description->(form.result)}
            onChange={event =>
              form.change(
                Description,
                ContactFormConfig.DescriptionField.update(
                  form.state,
                  event->ReactEvent.Form.target##value,
                ),
              )
            }
          />
        </div>
      </div>
    </form>
    {isModalVisible
       ? <ContactModal
           contact={form.state.contact}
           onModalClose={() => setIsModalVisible(_ => false)}
         />
       : ReasonReact.null}
  </div>;
};

let default = make;
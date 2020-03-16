const contactForm = require('../../../src/components/contact/form/ContactForm.bs').make;


describe('ContactModalText', () => {

    it('should render', async (done) => {
        let props = {
            title: {
                value: "Mr",
                label: "Mr",
            },
            firstName: "David",
            lastName: "smith",
            account: "11111",
            company: "crunch",
            phone: "222",
            fax: "888",
            companyTitle: "owner",
            email: "test@email.com",
            emailOp: "false",
            street: "sydney",
            city: "sydney",
            state_: {
                value: "VIC",
                label: "Victoria",
            },
            postcode: "2000",
            description: "test",
        }
        expect(contactModal(props)).toEqual()
        done()
    });

    it('should render with error if required fields not presented', async (done) => {

    });

    it('should render with error - email validation', async (done) => {

    });

    it('should render with error - phone validation', async (done) => {

    });

    it('should clear form when click button', async (done) => {

    });

    it('should open modal when click save button', async (done) => {

    });
})
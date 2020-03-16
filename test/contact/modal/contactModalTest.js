const contactModal = require('../../../src/components/contact/modal/ContactModalRow.bs').make;


describe('ContactModalText', () => {

    it('should render modal"', async (done) => {
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
        let expected=''
        expect(contactModal(props)).toEqual(expected)

        done()
    })
})
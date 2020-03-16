const contactModalrow = require('../../../src/components/contact/modal/ContactModalRow.bs').make;


describe('ContactModalText', () => {

    it('should render two fields"', async (done) => {
        let props ={field1:'a1', value1:"value1", field2:"a2", value2:"value2"}
        let expected='<div className="coloumns">' +
            '<div className="column, has-text-blac">a1</div>' +
            '<div className="column">value1</div>' +
            '<div className="column, has-text-blac">a2</div> ' +
            '<div className="column">value2</div> </div>'
        expect(contactModalrow(props)).toEqual(expected)

        done()
    })

    it('should render one field"', async (done) => {
        let props ={field1:'a1', value1:"value1"}
        let expected='<div className="coloumns">' +
            '<div className="column, has-text-blac">a1</div>' +
            '<div className="column">value1</div>' +
            '<div className="column, has-text-blac"></div> ' +
            '<div className="column"></div> </div>'
        expect(contactModalrow(props)).toEqual(expected)

        done()
    })
})
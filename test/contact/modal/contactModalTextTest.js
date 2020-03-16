const contactModal = require('../../../src/components/contact/modal/ContactModalText.bs').make;


describe('ContactModalText', () => {

    it('should render"', async (done) => {
        let props ={text:'abc', className:"mycalssname"}
        expect(contactModal(props)).toEqual(<div className="mycalssname">abc</div>)
        done()
    })
})
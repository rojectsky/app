const container = require('../../../../src/components/base/form/container/SingleInputContainer.bs').make;


describe('SingleInputContainer', () => {

    it('should render input text', async (done) => {
        let props = {
            config: {label: "Account Name", containerType:0}, value1: "1111"
        }
        let expected = '<div class="column">' +
            '<div class="field "><label class="label">Account Name</label>' +
            '<div class="field-body"><div class="field">' +
            '<input type="text" class="input" id="Account" placeholder="John\'s joinery" value="1111">' +
            '</div></div></div></div></div>'
        expect(container(props)).toEqual(expected)
        done()
    })

    it('should render text area', async (done) => {

    })

    it('should render with error', async (done) => {

    })

    it('should invoke onBlur', async (done) => {

    })

    it('should invoke onChange', async (done) => {

    })
})
const rowContainer = require('../../../../src/components/base/form/container/RowContainer.bs').make;


describe('RowContainer', () => {

    it('should render', async (done) => {
        let props = {
            config1: {label: "Account Name",containerType:0}, value1: "1111", config2: {label: "Company Name",containerType:0}, value2:"company"
        }
        let expected = '<div class="columns"><div class="column">' +
            '<div class="field "><label class="label">Account Name</label>' +
            '<div class="field-body"><div class="field">' +
            '<input type="text" class="input" id="Account" placeholder="John\'s joinery" value="1111">' +
            '</div></div></div></div><div class="column"><div class="field ">' +
            '<label class="label">Company Name</label><div class="field-body"><div class="field"><input type="text" class="input" id="Company" placeholder="John\'s Company" value="company"></div></div></div></div></div>'
        expect(rowContainer(props)).toEqual(expected)
        done()
    })

    it('should render with error result',async (done) => {

    })

    it('should call onchange ',async (done) => {

    })

    it('should call onblur ',async (done) => {

    })
})
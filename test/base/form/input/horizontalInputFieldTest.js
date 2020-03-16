const input = require('../../../../src/components/base/form/input/HorizontalInputField.bs').make;


describe('RowContainer', () => {

    it('should render', async (done) => {
        let props = {
            value: "value",
            inputId:'name',
            label: "first name"
        }
        let expected = '<div class="column"><div class="field "><label class="label">first name</label>' +
            '<div class="field-body"><div class="field">' +
            '<input type="text" class="input" id="LastName" placeholder="Smith" value="value"></div></div></div></div>'
        expect(input(props)).toEqual(expected)
        done()
    })

})
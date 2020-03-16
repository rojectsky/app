const textArea = require('../../../../src/components/base/form/input/TextAreaField.bs').make;


describe('TextArea', () => {

    it('should render', async (done) => {
        let props = {
            value: "value",
            inputId:'name',
            label: "first name"
        }
        let expected = '<div class="column"><div class="field">' +
            '<label class="label">first name </label><div class="field-body">' +
            '<div class="field"><div class="control">' +
            '<textarea class="textarea" id="Description" placeholder="Johns Description" type="text">value</textarea>' +
            '</div></div></div></div></div>'
        expect(textArea(props)).toEqual(expected)
        done()
    })

})
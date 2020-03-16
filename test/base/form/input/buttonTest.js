const buttons = require('../../../../src/components/base/form/input/Buttons.bs').make;


describe('Buttons', () => {

    it('should render with valid', async (done) => {
        let props = {
            valid: true
        }
        let expected = '<div class="field is-grouped is-pulled-right"><div class="field css-1ebdkna">' +
            '<button class="button is-link is-danger is-light">Cancel</button></div>' +
            '<div class="field css-1ebdkna"><button class="button is-link is-warning is-light" disabled="">' +
            '<span>Save</span></button></div></div>'
        expect(buttons(props)).toEqual(expected)
        done()
    })

    it('should render with invalid', async (done) => {
        let props = {
            valid: false
        }
        let expected = '<div class="field is-grouped is-pulled-right"><div class="field css-1ebdkna">' +
            '<button class="button is-link is-danger is-light">Cancel</button></div>' +
            '<div class="field css-1ebdkna"><button class="button is-link is-warning is-light" disabled="disabled">' +
            '<span>Save</span></button></div></div>'
        expect(buttons(props)).toEqual(expected)
        done()
    })


})
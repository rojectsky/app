const footer = require('../../../src/components/base/layout/FooterContent.bs').make;


describe('Footer', () => {

    it('should render ', async (done) => {
        let props = {
            content: "Privacy Policy"
        }
        let expected = '<div class="css-11his4m column"><a>Privacy Policy</a></div>'
        expect(footer(props)).toEqual(expected)
        done()
    })

})
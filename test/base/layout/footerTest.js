const footer = require('../../../src/components/base/layout/Footer.bs').make;


describe('Footer', () => {

    it('should render ', async (done) => {
        let expected = '<footer class="css-1lqh1l0 footer"><div class="css-xi606m columns">' +
            '<div class="css-11his4m column"><a>@Crunch Accounting All right reserved</a></div>' +
            '<div class="css-11his4m column"><a>Privacy Policy</a></div>' +
            '<div class="css-11his4m column"><a>Terms of Service</a></div></div></footer>'
        expect(footer()).toEqual(expected)
        done()
    })

})
const navbar = require('../../../src/components/base/layout/Navbar.bs').make;


describe('Footer', () => {

    it('should render ', async (done) => {
        let expected = '<nav class="nav" id="topnav"><a class="navbar-item">' +
            '<img src="../../../static/images/logo.png"></a></nav>'
        expect(navbar()).toEqual(expected)
        done()
    })

})
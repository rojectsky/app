const sectionTitle = require('../../../../src/components/base/form/input/SectionTitle.bs').make;


describe('SectionTitle', () => {

    it('should render', async (done) => {
        let props = {
            title: "Contact Information"
        }
        let expected = '<div class="title"><p class="title">Contact Information</p></div>'
        expect(sectionTitle(props)).toEqual(expected)
        done()
    })
})
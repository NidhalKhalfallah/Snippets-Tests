#define a function to parse an xml string
def parseXML(xmlString):
    #parse the xml you got from the file
    dom = parseString(xmlString)
    #retrieve the first xml tag (<tag>data</tag>) that the parser finds with name tagName:
    tag = dom.getElementsByTagName('tag')[0].toxml()
    #strip off the tag (<tag>data</tag>  --->   data):
    data = tag.replace('<tag>','').replace('</tag>','')
    return data
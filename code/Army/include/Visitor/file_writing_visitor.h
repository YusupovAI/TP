#ifndef TP_FILEWRITINGVISITOR_H
#define TP_FILEWRITINGVISITOR_H

#include "Visitor/visitor.h"
#include <memory>
#include <fstream>
#include <string>



class FileWritingVisitor : public Visitor {
public:
    FileWritingVisitor(const std::string&);
    void VisitInfantry(const Unit&) const override;
    void VisitMage(const Unit&) const override;
    void VisitHorseman(const Unit&) const override;    
    void Visit(const std::shared_ptr<Unit>&) const override;
    void VisitHero(const Unit&) const override;
    ~FileWritingVisitor();

private:
    mutable std::ofstream out_;
};


#endif

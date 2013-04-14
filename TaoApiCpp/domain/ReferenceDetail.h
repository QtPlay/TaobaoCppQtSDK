#ifndef REFERENCEDETAIL_H
#define REFERENCEDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 图片的引用详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ReferenceDetail : public TaoDomain
{

public:
 virtual ~ReferenceDetail() { }

  QString getAddress() const;
  void setAddress (QString address);
  QString getName() const;
  void setName (QString name);
  QString getReferenceType() const;
  void setReferenceType (QString referenceType);
  
  virtual void parseResponse();

private:
/**
 * @brief 引用者的地址
 **/
  QString address;

/**
 * @brief 引用者的名字
 **/
  QString name;

/**
 * @brief 引用的类型:item,被宝贝引用；decorating，被装修引用；huabao，被画报引用；unreferenced，未被引用
 **/
  QString referenceType;

};

#endif  /* REFERENCEDETAIL_H */

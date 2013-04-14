#ifndef FEATURE_H
#define FEATURE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 类目属性
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Feature : public TaoDomain
{

public:
 virtual ~Feature() { }

  QString getAttrKey() const;
  void setAttrKey (QString attrKey);
  QString getAttrValue() const;
  void setAttrValue (QString attrValue);
  
  virtual void parseResponse();

private:
/**
 * @brief 属性键
 **/
  QString attrKey;

/**
 * @brief 属性值
 **/
  QString attrValue;

};

#endif  /* FEATURE_H */

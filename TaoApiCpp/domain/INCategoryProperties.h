#ifndef INCATEGORYPROPERTIES_H
#define INCATEGORYPROPERTIES_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 类目属性对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class INCategoryProperties : public TaoDomain
{

public:
 virtual ~INCategoryProperties() { }

  QString getPropertiesDesc() const;
  void setPropertiesDesc (QString propertiesDesc);
  qlonglong getPropertiesId() const;
  void setPropertiesId (qlonglong propertiesId);
  QString getPropertiesName() const;
  void setPropertiesName (QString propertiesName);
  
  virtual void parseResponse();

private:
/**
 * @brief 类目属性对象描述
 **/
  QString propertiesDesc;

/**
 * @brief 类目属性对象ID
 **/
  qlonglong propertiesId;

/**
 * @brief 类目属性名称
 **/
  QString propertiesName;

};

#endif  /* INCATEGORYPROPERTIES_H */

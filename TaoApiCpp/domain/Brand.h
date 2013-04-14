#ifndef BRAND_H
#define BRAND_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 品牌
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Brand : public TaoDomain
{

public:
 virtual ~Brand() { }

  QString getName() const;
  void setName (QString name);
  qlonglong getPid() const;
  void setPid (qlonglong pid);
  QString getPropName() const;
  void setPropName (QString propName);
  qlonglong getVid() const;
  void setVid (qlonglong vid);
  
  virtual void parseResponse();

private:
/**
 * @brief vid的值
 **/
  QString name;

/**
 * @brief 品牌的属性id
 **/
  qlonglong pid;

/**
 * @brief 品牌的属性名
 **/
  QString propName;

/**
 * @brief 对应属性的 pid:vid 串中的vid
 **/
  qlonglong vid;

};

#endif  /* BRAND_H */

#ifndef SHOPCAT_H
#define SHOPCAT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 店铺类目
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShopCat : public TaoDomain
{

public:
 virtual ~ShopCat() { }

  qlonglong getCid() const;
  void setCid (qlonglong cid);
  bool getIsParent() const;
  void setIsParent (bool isParent);
  QString getName() const;
  void setName (QString name);
  qlonglong getParentCid() const;
  void setParentCid (qlonglong parentCid);
  
  virtual void parseResponse();

private:
/**
 * @brief 类目编号
 **/
  qlonglong cid;

/**
 * @brief 该类目是否为父类目。即：该类目是否还有子类目
 **/
  bool isParent;

/**
 * @brief 类目名称
 **/
  QString name;

/**
 * @brief 父类目编号，注：此类目指前台类目，值等于0：表示此类目为一级类目，值不等于0：表示此类目有父类目
 **/
  qlonglong parentCid;

};

#endif  /* SHOPCAT_H */

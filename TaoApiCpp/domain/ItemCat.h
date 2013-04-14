#ifndef ITEMCAT_H
#define ITEMCAT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/Feature.h>


/**
 * @brief 商品类目结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemCat : public TaoDomain
{

public:
 virtual ~ItemCat() { }

  qlonglong getCid() const;
  void setCid (qlonglong cid);
  QList<Feature> getFeatures() const;
  void setFeatures (QList<Feature> features);
  bool getIsParent() const;
  void setIsParent (bool isParent);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getModifiedType() const;
  void setModifiedType (QString modifiedType);
  QString getName() const;
  void setName (QString name);
  qlonglong getParentCid() const;
  void setParentCid (qlonglong parentCid);
  qlonglong getSortOrder() const;
  void setSortOrder (qlonglong sortOrder);
  QString getStatus() const;
  void setStatus (QString status);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品所属类目ID
 **/
  qlonglong cid;

/**
 * @brief Feature对象列表 
目前已有的属性： 
若Attr_key为 udsaleprop，attr_value为1 则允许卖家在改类目新增自定义销售属性,不然为不允许
 **/
  QList<Feature> features;

/**
 * @brief 该类目是否为父类目(即：该类目是否还有子类目)
 **/
  bool isParent;

/**
 * @brief 增量类目：修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 三种枚举类型：modify，add，delete（增量类目api使用）
 **/
  QString modifiedType;

/**
 * @brief 类目名称
 **/
  QString name;

/**
 * @brief 父类目ID=0时，代表的是一级的类目
 **/
  qlonglong parentCid;

/**
 * @brief 排列序号，表示同级类目的展现次序，如数值相等则按名称次序排列。取值范围:大于零的整数
 **/
  qlonglong sortOrder;

/**
 * @brief 状态。可选值:normal(正常),deleted(删除)
 **/
  QString status;

};

#endif  /* ITEMCAT_H */

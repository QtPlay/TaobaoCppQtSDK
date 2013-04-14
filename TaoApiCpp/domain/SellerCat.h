#ifndef SELLERCAT_H
#define SELLERCAT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 店铺内卖家自定义类目
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellerCat : public TaoDomain
{

public:
 virtual ~SellerCat() { }

  qlonglong getCid() const;
  void setCid (qlonglong cid);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getName() const;
  void setName (QString name);
  qlonglong getParentCid() const;
  void setParentCid (qlonglong parentCid);
  QString getPicUrl() const;
  void setPicUrl (QString picUrl);
  qlonglong getSortOrder() const;
  void setSortOrder (qlonglong sortOrder);
  QString getType() const;
  void setType (QString type);
  
  virtual void parseResponse();

private:
/**
 * @brief 卖家自定义类目编号
 **/
  qlonglong cid;

/**
 * @brief 创建时间。格式：yyyy-MM-dd HH:mm:ss
 **/
  QDateTime created;

/**
 * @brief 修改时间。格式：yyyy-MM-dd HH:mm:ss
 **/
  QDateTime modified;

/**
 * @brief 卖家自定义类目名称
 **/
  QString name;

/**
 * @brief 父类目编号，值等于0：表示此类目为店铺下的一级类目，值不等于0：表示此类目有父类目
 **/
  qlonglong parentCid;

/**
 * @brief 链接图片地址
 **/
  QString picUrl;

/**
 * @brief 该类目在页面上的排序位置
 **/
  qlonglong sortOrder;

/**
 * @brief 店铺类目类型：可选值：manual_type：手动分类，new_type：新品上价， tree_type：二三级类目树 ，property_type：属性叶子类目树， brand_type：品牌推广
 **/
  QString type;

};

#endif  /* SELLERCAT_H */

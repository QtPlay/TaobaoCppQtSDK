#ifndef PICTURECATEGORY_H
#define PICTURECATEGORY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 图片分类
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureCategory : public TaoDomain
{

public:
 virtual ~PictureCategory() { }

  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  qlonglong getParentId() const;
  void setParentId (qlonglong parentId);
  qlonglong getPictureCategoryId() const;
  void setPictureCategoryId (qlonglong pictureCategoryId);
  QString getPictureCategoryName() const;
  void setPictureCategoryName (QString pictureCategoryName);
  qlonglong getPosition() const;
  void setPosition (qlonglong position);
  QString getType() const;
  void setType (QString type);
  
  virtual void parseResponse();

private:
/**
 * @brief 图片类目的创建时间
 **/
  QDateTime created;

/**
 * @brief 图片分类的修改时间
 **/
  QDateTime modified;

/**
 * @brief 一级分类的parent_id为0 
二级分类的则为其父分类的picture_category_id
 **/
  qlonglong parentId;

/**
 * @brief 图片分类ID
 **/
  qlonglong pictureCategoryId;

/**
 * @brief 图片分类名
 **/
  QString pictureCategoryName;

/**
 * @brief 图片分类排序
 **/
  qlonglong position;

/**
 * @brief 图片分类型别，sys-fixture代表店铺装修分类(系统分类)，sys-auction代表宝贝图片分类(系统分类)，user-define代表用户自定义分类
 **/
  QString type;

};

#endif  /* PICTURECATEGORY_H */

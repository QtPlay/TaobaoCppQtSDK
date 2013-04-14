#ifndef PICTURECATEGORYUPDATEREQUEST_H
#define PICTURECATEGORYUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PictureCategoryUpdateResponse.h>

/**
 * TOP API: 更新图片分类的名字，或者更新图片分类的父分类（即分类移动）。只能移动2级分类到非2级分类，默认分类和1级分类不可移动。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureCategoryUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCategoryId() const
;  void setCategoryId (qlonglong categoryId);

 QString getCategoryName() const
;  void setCategoryName (QString categoryName);

 qlonglong getParentId() const
;  void setParentId (qlonglong parentId);


  virtual PictureCategoryUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 要更新的图片分类的id
 **/
  qlonglong categoryId;

/**
 * @brief 图片分类的新名字，最大长度20字符，不能为空
 **/
  QString categoryName;

/**
 * @brief 图片分类的新父分类id
 **/
  qlonglong parentId;

};

#endif  /* PICTURECATEGORYUPDATEREQUEST_H */

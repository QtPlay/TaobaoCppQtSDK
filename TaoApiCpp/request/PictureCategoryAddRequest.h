#ifndef PICTURECATEGORYADDREQUEST_H
#define PICTURECATEGORYADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PictureCategoryAddResponse.h>

/**
 * TOP API: 同一卖家最多添加500个图片分类，图片分类名称长度最大为20个字符
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureCategoryAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getParentId() const
;  void setParentId (qlonglong parentId);

 QString getPictureCategoryName() const
;  void setPictureCategoryName (QString pictureCategoryName);


  virtual PictureCategoryAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 图片分类的父分类,一级分类的parent_id为0,二级分类的则为其父分类的picture_category_id
 **/
  qlonglong parentId;

/**
 * @brief 图片分类名称，最大长度20字符，中英文都算一字符，不能为空
 **/
  QString pictureCategoryName;

};

#endif  /* PICTURECATEGORYADDREQUEST_H */

#ifndef PICTURECATEGORYGETREQUEST_H
#define PICTURECATEGORYGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PictureCategoryGetResponse.h>

/**
 * TOP API: 获取图片分类信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureCategoryGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getModifiedTime() const
;  void setModifiedTime (QDateTime modifiedTime);

 qlonglong getParentId() const
;  void setParentId (qlonglong parentId);

 qlonglong getPictureCategoryId() const
;  void setPictureCategoryId (qlonglong pictureCategoryId);

 QString getPictureCategoryName() const
;  void setPictureCategoryName (QString pictureCategoryName);

 QString getType() const
;  void setType (QString type);


  virtual PictureCategoryGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 图片分类的修改时间点，格式:yyyy-MM-dd HH:mm:ss。查询此修改时间点之后到目前的图片分类。
 **/
  QDateTime modifiedTime;

/**
 * @brief 取二级分类时设置为对应父分类id 
取一级分类时父分类id设为0 
取全部分类的时候不设或设为-1
 **/
  qlonglong parentId;

/**
 * @brief 图片分类ID
 **/
  qlonglong pictureCategoryId;

/**
 * @brief 图片分类名，不支持模糊查询
 **/
  QString pictureCategoryName;

/**
 * @brief 分类类型,fixed代表店铺装修分类类别，auction代表宝贝分类类别，user-define代表用户自定义分类类别
 **/
  QString type;

};

#endif  /* PICTURECATEGORYGETREQUEST_H */

#ifndef PICTUREGETREQUEST_H
#define PICTUREGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PictureGetResponse.h>

/**
 * TOP API: 获取图片信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getDeleted() const
;  void setDeleted (QString deleted);

 QDateTime getEndDate() const
;  void setEndDate (QDateTime endDate);

 QDateTime getModifiedTime() const
;  void setModifiedTime (QDateTime modifiedTime);

 QString getOrderBy() const
;  void setOrderBy (QString orderBy);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 qlonglong getPictureCategoryId() const
;  void setPictureCategoryId (qlonglong pictureCategoryId);

 qlonglong getPictureId() const
;  void setPictureId (qlonglong pictureId);

 QDateTime getStartDate() const
;  void setStartDate (QDateTime startDate);

 QString getTitle() const
;  void setTitle (QString title);


  virtual PictureGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 是否删除,unfroze代表没有删除
 **/
  QString deleted;

/**
 * @brief 查询上传结束时间点,格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime endDate;

/**
 * @brief 图片被修改的时间点，格式:yyyy-MM-dd HH:mm:ss。查询此修改时间点之后到目前的图片。
 **/
  QDateTime modifiedTime;

/**
 * @brief 图片查询结果排序,time:desc按上传时间从晚到早(默认), time:asc按上传时间从早到晚,sizes:desc按图片从大到小，sizes:asc按图片从小到大,默认time:desc
 **/
  QString orderBy;

/**
 * @brief 页码.传入值为1代表第一页,传入值为2代表第二页,依此类推,默认值为1
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数.每页返回最多返回100条,默认值40
 **/
  qlonglong pageSize;

/**
 * @brief 图片分类ID
 **/
  qlonglong pictureCategoryId;

/**
 * @brief 图片ID
 **/
  qlonglong pictureId;

/**
 * @brief 查询上传开始时间点,格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime startDate;

/**
 * @brief 图片标题,最大长度50字符,中英文都算一字符
 **/
  QString title;

};

#endif  /* PICTUREGETREQUEST_H */

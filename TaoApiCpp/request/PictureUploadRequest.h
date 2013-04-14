#ifndef PICTUREUPLOADREQUEST_H
#define PICTUREUPLOADREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PictureUploadResponse.h>

/**
 * TOP API: 上传单张图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureUploadRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getImageInputTitle() const
;  void setImageInputTitle (QString imageInputTitle);

 FileItem getImg() const
;  void setImg (FileItem img);

 qlonglong getPictureCategoryId() const
;  void setPictureCategoryId (qlonglong pictureCategoryId);

 QString getTitle() const
;  void setTitle (QString title);


  virtual PictureUploadResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 包括后缀名的图片标题,不能为空，如Bule.jpg,有些卖家希望图片上传后取图片文件的默认名
 **/
  QString imageInputTitle;

/**
 * @brief 图片二进制文件流,不能为空,允许png、jpg、gif图片格式
 **/
  FileItem img;

/**
 * @brief 图片分类ID，设置具体某个分类ID或设置0上传到默认分类，只能传入一个分类
 **/
  qlonglong pictureCategoryId;

/**
 * @brief 图片标题,如果为空,传的图片标题就取去掉后缀名的image_input_title,超过50字符长度会截取50字符,重名会在标题末尾加"(1)";标题末尾已经有"(数字)"了，则数字加1
 **/
  QString title;

};

#endif  /* PICTUREUPLOADREQUEST_H */

#ifndef PICTURE_H
#define PICTURE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Picture : public TaoDomain
{

public:
 virtual ~Picture() { }

  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QString getDeleted() const;
  void setDeleted (QString deleted);
  QString getMd5() const;
  void setMd5 (QString md5);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  qlonglong getPictureCategoryId() const;
  void setPictureCategoryId (qlonglong pictureCategoryId);
  qlonglong getPictureId() const;
  void setPictureId (qlonglong pictureId);
  QString getPicturePath() const;
  void setPicturePath (QString picturePath);
  QString getPixel() const;
  void setPixel (QString pixel);
  bool getReferenced() const;
  void setReferenced (bool referenced);
  qlonglong getSizes() const;
  void setSizes (qlonglong sizes);
  QString getStatus() const;
  void setStatus (QString status);
  QString getTitle() const;
  void setTitle (QString title);
  qlonglong getUid() const;
  void setUid (qlonglong uid);
  
  virtual void parseResponse();

private:
/**
 * @brief 图片的创建时间
 **/
  QDateTime created;

/**
 * @brief 图片是否删除的标记
 **/
  QString deleted;

/**
 * @brief 图片在后台处理之后的md5值 
当md5值为32位长度的字符串时为图片搬家后的文件md5验证码 
md5值为长整数时为图片替换后的时间戳
 **/
  QString md5;

/**
 * @brief 图片的修改时间
 **/
  QDateTime modified;

/**
 * @brief 图片分类ID
 **/
  qlonglong pictureCategoryId;

/**
 * @brief 图片ID
 **/
  qlonglong pictureId;

/**
 * @brief 返回的是绝对路径如：http://img07.taobaocdn.com/imgextra/i7/22670458/T2dD0kXb4cXXXXXXXX_!!22670458.jpg
 **/
  QString picturePath;

/**
 * @brief 图片相素,格式:长x宽，如450x150
 **/
  QString pixel;

/**
 * @brief 图片是否被引用
 **/
  bool referenced;

/**
 * @brief 图片大小,bite单位
 **/
  qlonglong sizes;

/**
 * @brief 图片状态,unfroze代表没有被冻结，froze代表被冻结,pass代表排查通过
 **/
  QString status;

/**
 * @brief 图片标题
 **/
  QString title;

/**
 * @brief 卖家ID
 **/
  qlonglong uid;

};

#endif  /* PICTURE_H */

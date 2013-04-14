#ifndef FENXIAOPRODUCTIMAGEUPLOADRESPONSE_H
#define FENXIAOPRODUCTIMAGEUPLOADRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 产品主图图片空间相对路径或绝对路径添加或更新，或者是图片上传。如果指定位置的图片已存在，则覆盖原有信息。如果位置为1,自动设为主图；如果位置为0，表示属性图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductImageUploadResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductImageUploadResponse() { }

  QDateTime getCreated() const;
  void setCreated (QDateTime created);  bool getResult() const;
  void setResult (bool result);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 操作时间
 **/
  QDateTime created;

/**
 * @brief 操作是否成功
 **/
  bool result;

};

#endif

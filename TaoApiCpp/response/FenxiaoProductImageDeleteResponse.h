#ifndef FENXIAOPRODUCTIMAGEDELETERESPONSE_H
#define FENXIAOPRODUCTIMAGEDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 产品图片删除，只删除图片信息，不真正删除图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductImageDeleteResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductImageDeleteResponse() { }

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
 * @brief 操作结果
 **/
  bool result;

};

#endif

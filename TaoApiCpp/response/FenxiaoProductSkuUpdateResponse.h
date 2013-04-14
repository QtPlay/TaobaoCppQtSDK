#ifndef FENXIAOPRODUCTSKUUPDATERESPONSE_H
#define FENXIAOPRODUCTSKUUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 产品SKU信息更新
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductSkuUpdateResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductSkuUpdateResponse() { }

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

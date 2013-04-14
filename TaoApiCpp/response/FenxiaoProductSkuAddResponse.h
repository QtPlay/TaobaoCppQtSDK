#ifndef FENXIAOPRODUCTSKUADDRESPONSE_H
#define FENXIAOPRODUCTSKUADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 添加产品SKU信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductSkuAddResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductSkuAddResponse() { }

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

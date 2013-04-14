#ifndef FENXIAOPRODUCTSKUDELETERESPONSE_H
#define FENXIAOPRODUCTSKUDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 根据sku properties删除sku数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductSkuDeleteResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductSkuDeleteResponse() { }

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

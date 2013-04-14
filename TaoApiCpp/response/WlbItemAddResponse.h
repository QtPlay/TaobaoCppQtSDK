#ifndef WLBITEMADDRESPONSE_H
#define WLBITEMADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 添加物流宝商品，支持物流宝子商品和属性添加
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemAddResponse : public TaoResponse
{
public:
 virtual ~WlbItemAddResponse() { }

  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 新增的商品
 **/
  qlonglong itemId;

};

#endif

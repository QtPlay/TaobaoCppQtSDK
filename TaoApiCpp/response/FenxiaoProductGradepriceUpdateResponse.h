#ifndef FENXIAOPRODUCTGRADEPRICEUPDATERESPONSE_H
#define FENXIAOPRODUCTGRADEPRICEUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 供应商可以针对产品不同的sku，指定对应交易类型（代销or经销）方式下，设定折扣方式（按等级or指定分销商）以及对应优惠后的采购价格
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductGradepriceUpdateResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductGradepriceUpdateResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回操作结果：成功或失败
 **/
  bool isSuccess;

};

#endif

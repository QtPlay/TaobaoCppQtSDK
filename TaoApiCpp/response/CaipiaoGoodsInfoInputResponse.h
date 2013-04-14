#ifndef CAIPIAOGOODSINFOINPUTRESPONSE_H
#define CAIPIAOGOODSINFOINPUTRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 录入参加送彩票商品信息，如果录入成功，返回true，如果录入失败，返回false，后端会根据商品id与赠送类型（goodsid_presenttype_uk）来决定是新增数据还是修改数据。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoGoodsInfoInputResponse : public TaoResponse
{
public:
 virtual ~CaipiaoGoodsInfoInputResponse() { }

  bool getInputResult() const;
  void setInputResult (bool inputResult);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 录入操作是否成功
 **/
  bool inputResult;

};

#endif

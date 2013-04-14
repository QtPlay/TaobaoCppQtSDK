#ifndef CAIPIAOSHOPINFOINPUTRESPONSE_H
#define CAIPIAOSHOPINFOINPUTRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 录入参加送彩票店铺信息，如果录入成功，返回true，如果录入失败，返回false，后端会根据卖家id与赠送类型（sellerid_presenttype_uk）来决定是新增数据还是修改数据。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoShopInfoInputResponse : public TaoResponse
{
public:
 virtual ~CaipiaoShopInfoInputResponse() { }

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

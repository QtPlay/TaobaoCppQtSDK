#ifndef WLBCONSIGNMENT_H
#define WLBCONSIGNMENT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 物流宝代销关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbConsignMent : public TaoDomain
{

public:
 virtual ~WlbConsignMent() { }

  qlonglong getId() const;
  void setId (qlonglong id);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  qlonglong getNumber() const;
  void setNumber (qlonglong number);
  qlonglong getTgtItemId() const;
  void setTgtItemId (qlonglong tgtItemId);
  qlonglong getTgtUserId() const;
  void setTgtUserId (qlonglong tgtUserId);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  
  virtual void parseResponse();

private:
/**
 * @brief 代销关系id
 **/
  qlonglong id;

/**
 * @brief 代销商用户前台宝贝id
 **/
  qlonglong itemId;

/**
 * @brief 代销数量
 **/
  qlonglong number;

/**
 * @brief 供应商商品id
 **/
  qlonglong tgtItemId;

/**
 * @brief 供应商用户id
 **/
  qlonglong tgtUserId;

/**
 * @brief 代销商用户id
 **/
  qlonglong userId;

};

#endif  /* WLBCONSIGNMENT_H */

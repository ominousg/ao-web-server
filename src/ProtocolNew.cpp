
/* Automatically generated file */

#include "stdafx.h"

#include <sstream>

#include "ProtocolNew.h"

namespace dakara {
namespace protocol {


namespace client {

ClientPacket* ClientPacketFactory(clsByteQueue* buffer) {
    if (buffer->length() < 1) return 0;
    ClientPacket *p = 0;
    int PacketID = buffer->PeekByte();

    switch (PacketID) {

        case 0:
            p = new LoginExistingChar(buffer);
            break;

        case 1:
            p = new ThrowDices(buffer);
            break;

        case 2:
            p = new LoginNewChar(buffer);
            break;

        case 3:
            p = new Talk(buffer);
            break;

        case 4:
            p = new Yell(buffer);
            break;

        case 5:
            p = new Whisper(buffer);
            break;

        case 6:
            p = new Walk(buffer);
            break;

        case 7:
            p = new RequestPositionUpdate(buffer);
            break;

        case 8:
            p = new Attack(buffer);
            break;

        case 9:
            p = new PickUp(buffer);
            break;

        case 10:
            p = new SafeToggle(buffer);
            break;

        case 11:
            p = new ResuscitationSafeToggle(buffer);
            break;

        case 12:
            p = new RequestGuildLeaderInfo(buffer);
            break;

        case 13:
            p = new RequestAtributes(buffer);
            break;

        case 14:
            p = new RequestFame(buffer);
            break;

        case 15:
            p = new RequestSkills(buffer);
            break;

        case 16:
            p = new RequestMiniStats(buffer);
            break;

        case 17:
            p = new CommerceEnd(buffer);
            break;

        case 18:
            p = new UserCommerceEnd(buffer);
            break;

        case 19:
            p = new UserCommerceConfirm(buffer);
            break;

        case 20:
            p = new CommerceChat(buffer);
            break;

        case 21:
            p = new BankEnd(buffer);
            break;

        case 22:
            p = new UserCommerceOk(buffer);
            break;

        case 23:
            p = new UserCommerceReject(buffer);
            break;

        case 24:
            p = new Drop(buffer);
            break;

        case 25:
            p = new CastSpell(buffer);
            break;

        case 26:
            p = new LeftClick(buffer);
            break;

        case 27:
            p = new DoubleClick(buffer);
            break;

        case 28:
            p = new Work(buffer);
            break;

        case 29:
            p = new UseSpellMacro(buffer);
            break;

        case 30:
            p = new UseItem(buffer);
            break;

        case 31:
            p = new CraftBlacksmith(buffer);
            break;

        case 32:
            p = new CraftCarpenter(buffer);
            break;

        case 33:
            p = new WorkLeftClick(buffer);
            break;

        case 34:
            p = new CreateNewGuild(buffer);
            break;

        case 35:
            p = new SpellInfo(buffer);
            break;

        case 36:
            p = new EquipItem(buffer);
            break;

        case 37:
            p = new ChangeHeading(buffer);
            break;

        case 38:
            p = new ModifySkills(buffer);
            break;

        case 39:
            p = new Train(buffer);
            break;

        case 40:
            p = new CommerceBuy(buffer);
            break;

        case 41:
            p = new BankExtractItem(buffer);
            break;

        case 42:
            p = new CommerceSell(buffer);
            break;

        case 43:
            p = new BankDeposit(buffer);
            break;

        case 44:
            p = new ForumPost(buffer);
            break;

        case 45:
            p = new MoveSpell(buffer);
            break;

        case 46:
            p = new MoveBank(buffer);
            break;

        case 47:
            p = new ClanCodexUpdate(buffer);
            break;

        case 48:
            p = new UserCommerceOffer(buffer);
            break;

        case 49:
            p = new GuildAcceptPeace(buffer);
            break;

        case 50:
            p = new GuildRejectAlliance(buffer);
            break;

        case 51:
            p = new GuildRejectPeace(buffer);
            break;

        case 52:
            p = new GuildAcceptAlliance(buffer);
            break;

        case 53:
            p = new GuildOfferPeace(buffer);
            break;

        case 54:
            p = new GuildOfferAlliance(buffer);
            break;

        case 55:
            p = new GuildAllianceDetails(buffer);
            break;

        case 56:
            p = new GuildPeaceDetails(buffer);
            break;

        case 57:
            p = new GuildRequestJoinerInfo(buffer);
            break;

        case 58:
            p = new GuildAlliancePropList(buffer);
            break;

        case 59:
            p = new GuildPeacePropList(buffer);
            break;

        case 60:
            p = new GuildDeclareWar(buffer);
            break;

        case 61:
            p = new GuildNewWebsite(buffer);
            break;

        case 62:
            p = new GuildAcceptNewMember(buffer);
            break;

        case 63:
            p = new GuildRejectNewMember(buffer);
            break;

        case 64:
            p = new GuildKickMember(buffer);
            break;

        case 65:
            p = new GuildUpdateNews(buffer);
            break;

        case 66:
            p = new GuildMemberInfo(buffer);
            break;

        case 67:
            p = new GuildOpenElections(buffer);
            break;

        case 68:
            p = new GuildRequestMembership(buffer);
            break;

        case 69:
            p = new GuildRequestDetails(buffer);
            break;

        case 70:
            p = new Online(buffer);
            break;

        case 71:
            p = new Quit(buffer);
            break;

        case 72:
            p = new GuildLeave(buffer);
            break;

        case 73:
            p = new RequestAccountState(buffer);
            break;

        case 74:
            p = new PetStand(buffer);
            break;

        case 75:
            p = new PetFollow(buffer);
            break;

        case 76:
            p = new ReleasePet(buffer);
            break;

        case 77:
            p = new TrainList(buffer);
            break;

        case 78:
            p = new Rest(buffer);
            break;

        case 79:
            p = new Meditate(buffer);
            break;

        case 80:
            p = new Resucitate(buffer);
            break;

        case 81:
            p = new Heal(buffer);
            break;

        case 82:
            p = new Help(buffer);
            break;

        case 83:
            p = new RequestStats(buffer);
            break;

        case 84:
            p = new CommerceStart(buffer);
            break;

        case 85:
            p = new BankStart(buffer);
            break;

        case 86:
            p = new Enlist(buffer);
            break;

        case 87:
            p = new Information(buffer);
            break;

        case 88:
            p = new Reward(buffer);
            break;

        case 89:
            p = new RequestMOTD(buffer);
            break;

        case 90:
            p = new UpTime(buffer);
            break;

        case 91:
            p = new PartyLeave(buffer);
            break;

        case 92:
            p = new PartyCreate(buffer);
            break;

        case 93:
            p = new PartyJoin(buffer);
            break;

        case 94:
            p = new Inquiry(buffer);
            break;

        case 95:
            p = new GuildMessage(buffer);
            break;

        case 96:
            p = new PartyMessage(buffer);
            break;

        case 97:
            p = new CentinelReport(buffer);
            break;

        case 98:
            p = new GuildOnline(buffer);
            break;

        case 99:
            p = new PartyOnline(buffer);
            break;

        case 100:
            p = new CouncilMessage(buffer);
            break;

        case 101:
            p = new RoleMasterRequest(buffer);
            break;

        case 102:
            p = new GMRequest(buffer);
            break;

        case 103:
            p = new BugReport(buffer);
            break;

        case 104:
            p = new ChangeDescription(buffer);
            break;

        case 105:
            p = new GuildVote(buffer);
            break;

        case 106:
            p = new Punishments(buffer);
            break;

        case 107:
            p = new ChangePassword(buffer);
            break;

        case 108:
            p = new Gamble(buffer);
            break;

        case 109:
            p = new InquiryVote(buffer);
            break;

        case 110:
            p = new LeaveFaction(buffer);
            break;

        case 111:
            p = new BankExtractGold(buffer);
            break;

        case 112:
            p = new BankDepositGold(buffer);
            break;

        case 113:
            p = new Denounce(buffer);
            break;

        case 114:
            p = new GuildFundate(buffer);
            break;

        case 115:
            p = new GuildFundation(buffer);
            break;

        case 116:
            p = new PartyKick(buffer);
            break;

        case 117:
            p = new PartySetLeader(buffer);
            break;

        case 118:
            p = new PartyAcceptMember(buffer);
            break;

        case 119:
            p = new Ping(buffer);
            break;

        case 120:
            p = new RequestPartyForm(buffer);
            break;

        case 121:
            p = new ItemUpgrade(buffer);
            break;

        case 122:
            p = new GMCommands(buffer);
            break;

        case 123:
            p = new InitCrafting(buffer);
            break;

        case 124:
            p = new Home(buffer);
            break;

        case 125:
            p = new ShowGuildNews(buffer);
            break;

        case 126:
            p = new ShareNpc(buffer);
            break;

        case 127:
            p = new StopSharingNpc(buffer);
            break;

        case 128:
            p = new Consultation(buffer);
            break;

        case 129:
            p = new MoveItem(buffer);
            break;

    }
    return p;
}

void ClientPacketDecodeAndDispatch(clsByteQueue* buffer, PacketHandler* handler) {
    if (buffer->length() < 1) return;
    int PacketID = buffer->PeekByte();

    switch (PacketID) {

        case 0:
        {
            LoginExistingChar p(buffer);
            p.dispatch(handler);
            break;
        }

        case 1:
        {
            ThrowDices p(buffer);
            p.dispatch(handler);
            break;
        }

        case 2:
        {
            LoginNewChar p(buffer);
            p.dispatch(handler);
            break;
        }

        case 3:
        {
            Talk p(buffer);
            p.dispatch(handler);
            break;
        }

        case 4:
        {
            Yell p(buffer);
            p.dispatch(handler);
            break;
        }

        case 5:
        {
            Whisper p(buffer);
            p.dispatch(handler);
            break;
        }

        case 6:
        {
            Walk p(buffer);
            p.dispatch(handler);
            break;
        }

        case 7:
        {
            RequestPositionUpdate p(buffer);
            p.dispatch(handler);
            break;
        }

        case 8:
        {
            Attack p(buffer);
            p.dispatch(handler);
            break;
        }

        case 9:
        {
            PickUp p(buffer);
            p.dispatch(handler);
            break;
        }

        case 10:
        {
            SafeToggle p(buffer);
            p.dispatch(handler);
            break;
        }

        case 11:
        {
            ResuscitationSafeToggle p(buffer);
            p.dispatch(handler);
            break;
        }

        case 12:
        {
            RequestGuildLeaderInfo p(buffer);
            p.dispatch(handler);
            break;
        }

        case 13:
        {
            RequestAtributes p(buffer);
            p.dispatch(handler);
            break;
        }

        case 14:
        {
            RequestFame p(buffer);
            p.dispatch(handler);
            break;
        }

        case 15:
        {
            RequestSkills p(buffer);
            p.dispatch(handler);
            break;
        }

        case 16:
        {
            RequestMiniStats p(buffer);
            p.dispatch(handler);
            break;
        }

        case 17:
        {
            CommerceEnd p(buffer);
            p.dispatch(handler);
            break;
        }

        case 18:
        {
            UserCommerceEnd p(buffer);
            p.dispatch(handler);
            break;
        }

        case 19:
        {
            UserCommerceConfirm p(buffer);
            p.dispatch(handler);
            break;
        }

        case 20:
        {
            CommerceChat p(buffer);
            p.dispatch(handler);
            break;
        }

        case 21:
        {
            BankEnd p(buffer);
            p.dispatch(handler);
            break;
        }

        case 22:
        {
            UserCommerceOk p(buffer);
            p.dispatch(handler);
            break;
        }

        case 23:
        {
            UserCommerceReject p(buffer);
            p.dispatch(handler);
            break;
        }

        case 24:
        {
            Drop p(buffer);
            p.dispatch(handler);
            break;
        }

        case 25:
        {
            CastSpell p(buffer);
            p.dispatch(handler);
            break;
        }

        case 26:
        {
            LeftClick p(buffer);
            p.dispatch(handler);
            break;
        }

        case 27:
        {
            DoubleClick p(buffer);
            p.dispatch(handler);
            break;
        }

        case 28:
        {
            Work p(buffer);
            p.dispatch(handler);
            break;
        }

        case 29:
        {
            UseSpellMacro p(buffer);
            p.dispatch(handler);
            break;
        }

        case 30:
        {
            UseItem p(buffer);
            p.dispatch(handler);
            break;
        }

        case 31:
        {
            CraftBlacksmith p(buffer);
            p.dispatch(handler);
            break;
        }

        case 32:
        {
            CraftCarpenter p(buffer);
            p.dispatch(handler);
            break;
        }

        case 33:
        {
            WorkLeftClick p(buffer);
            p.dispatch(handler);
            break;
        }

        case 34:
        {
            CreateNewGuild p(buffer);
            p.dispatch(handler);
            break;
        }

        case 35:
        {
            SpellInfo p(buffer);
            p.dispatch(handler);
            break;
        }

        case 36:
        {
            EquipItem p(buffer);
            p.dispatch(handler);
            break;
        }

        case 37:
        {
            ChangeHeading p(buffer);
            p.dispatch(handler);
            break;
        }

        case 38:
        {
            ModifySkills p(buffer);
            p.dispatch(handler);
            break;
        }

        case 39:
        {
            Train p(buffer);
            p.dispatch(handler);
            break;
        }

        case 40:
        {
            CommerceBuy p(buffer);
            p.dispatch(handler);
            break;
        }

        case 41:
        {
            BankExtractItem p(buffer);
            p.dispatch(handler);
            break;
        }

        case 42:
        {
            CommerceSell p(buffer);
            p.dispatch(handler);
            break;
        }

        case 43:
        {
            BankDeposit p(buffer);
            p.dispatch(handler);
            break;
        }

        case 44:
        {
            ForumPost p(buffer);
            p.dispatch(handler);
            break;
        }

        case 45:
        {
            MoveSpell p(buffer);
            p.dispatch(handler);
            break;
        }

        case 46:
        {
            MoveBank p(buffer);
            p.dispatch(handler);
            break;
        }

        case 47:
        {
            ClanCodexUpdate p(buffer);
            p.dispatch(handler);
            break;
        }

        case 48:
        {
            UserCommerceOffer p(buffer);
            p.dispatch(handler);
            break;
        }

        case 49:
        {
            GuildAcceptPeace p(buffer);
            p.dispatch(handler);
            break;
        }

        case 50:
        {
            GuildRejectAlliance p(buffer);
            p.dispatch(handler);
            break;
        }

        case 51:
        {
            GuildRejectPeace p(buffer);
            p.dispatch(handler);
            break;
        }

        case 52:
        {
            GuildAcceptAlliance p(buffer);
            p.dispatch(handler);
            break;
        }

        case 53:
        {
            GuildOfferPeace p(buffer);
            p.dispatch(handler);
            break;
        }

        case 54:
        {
            GuildOfferAlliance p(buffer);
            p.dispatch(handler);
            break;
        }

        case 55:
        {
            GuildAllianceDetails p(buffer);
            p.dispatch(handler);
            break;
        }

        case 56:
        {
            GuildPeaceDetails p(buffer);
            p.dispatch(handler);
            break;
        }

        case 57:
        {
            GuildRequestJoinerInfo p(buffer);
            p.dispatch(handler);
            break;
        }

        case 58:
        {
            GuildAlliancePropList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 59:
        {
            GuildPeacePropList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 60:
        {
            GuildDeclareWar p(buffer);
            p.dispatch(handler);
            break;
        }

        case 61:
        {
            GuildNewWebsite p(buffer);
            p.dispatch(handler);
            break;
        }

        case 62:
        {
            GuildAcceptNewMember p(buffer);
            p.dispatch(handler);
            break;
        }

        case 63:
        {
            GuildRejectNewMember p(buffer);
            p.dispatch(handler);
            break;
        }

        case 64:
        {
            GuildKickMember p(buffer);
            p.dispatch(handler);
            break;
        }

        case 65:
        {
            GuildUpdateNews p(buffer);
            p.dispatch(handler);
            break;
        }

        case 66:
        {
            GuildMemberInfo p(buffer);
            p.dispatch(handler);
            break;
        }

        case 67:
        {
            GuildOpenElections p(buffer);
            p.dispatch(handler);
            break;
        }

        case 68:
        {
            GuildRequestMembership p(buffer);
            p.dispatch(handler);
            break;
        }

        case 69:
        {
            GuildRequestDetails p(buffer);
            p.dispatch(handler);
            break;
        }

        case 70:
        {
            Online p(buffer);
            p.dispatch(handler);
            break;
        }

        case 71:
        {
            Quit p(buffer);
            p.dispatch(handler);
            break;
        }

        case 72:
        {
            GuildLeave p(buffer);
            p.dispatch(handler);
            break;
        }

        case 73:
        {
            RequestAccountState p(buffer);
            p.dispatch(handler);
            break;
        }

        case 74:
        {
            PetStand p(buffer);
            p.dispatch(handler);
            break;
        }

        case 75:
        {
            PetFollow p(buffer);
            p.dispatch(handler);
            break;
        }

        case 76:
        {
            ReleasePet p(buffer);
            p.dispatch(handler);
            break;
        }

        case 77:
        {
            TrainList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 78:
        {
            Rest p(buffer);
            p.dispatch(handler);
            break;
        }

        case 79:
        {
            Meditate p(buffer);
            p.dispatch(handler);
            break;
        }

        case 80:
        {
            Resucitate p(buffer);
            p.dispatch(handler);
            break;
        }

        case 81:
        {
            Heal p(buffer);
            p.dispatch(handler);
            break;
        }

        case 82:
        {
            Help p(buffer);
            p.dispatch(handler);
            break;
        }

        case 83:
        {
            RequestStats p(buffer);
            p.dispatch(handler);
            break;
        }

        case 84:
        {
            CommerceStart p(buffer);
            p.dispatch(handler);
            break;
        }

        case 85:
        {
            BankStart p(buffer);
            p.dispatch(handler);
            break;
        }

        case 86:
        {
            Enlist p(buffer);
            p.dispatch(handler);
            break;
        }

        case 87:
        {
            Information p(buffer);
            p.dispatch(handler);
            break;
        }

        case 88:
        {
            Reward p(buffer);
            p.dispatch(handler);
            break;
        }

        case 89:
        {
            RequestMOTD p(buffer);
            p.dispatch(handler);
            break;
        }

        case 90:
        {
            UpTime p(buffer);
            p.dispatch(handler);
            break;
        }

        case 91:
        {
            PartyLeave p(buffer);
            p.dispatch(handler);
            break;
        }

        case 92:
        {
            PartyCreate p(buffer);
            p.dispatch(handler);
            break;
        }

        case 93:
        {
            PartyJoin p(buffer);
            p.dispatch(handler);
            break;
        }

        case 94:
        {
            Inquiry p(buffer);
            p.dispatch(handler);
            break;
        }

        case 95:
        {
            GuildMessage p(buffer);
            p.dispatch(handler);
            break;
        }

        case 96:
        {
            PartyMessage p(buffer);
            p.dispatch(handler);
            break;
        }

        case 97:
        {
            CentinelReport p(buffer);
            p.dispatch(handler);
            break;
        }

        case 98:
        {
            GuildOnline p(buffer);
            p.dispatch(handler);
            break;
        }

        case 99:
        {
            PartyOnline p(buffer);
            p.dispatch(handler);
            break;
        }

        case 100:
        {
            CouncilMessage p(buffer);
            p.dispatch(handler);
            break;
        }

        case 101:
        {
            RoleMasterRequest p(buffer);
            p.dispatch(handler);
            break;
        }

        case 102:
        {
            GMRequest p(buffer);
            p.dispatch(handler);
            break;
        }

        case 103:
        {
            BugReport p(buffer);
            p.dispatch(handler);
            break;
        }

        case 104:
        {
            ChangeDescription p(buffer);
            p.dispatch(handler);
            break;
        }

        case 105:
        {
            GuildVote p(buffer);
            p.dispatch(handler);
            break;
        }

        case 106:
        {
            Punishments p(buffer);
            p.dispatch(handler);
            break;
        }

        case 107:
        {
            ChangePassword p(buffer);
            p.dispatch(handler);
            break;
        }

        case 108:
        {
            Gamble p(buffer);
            p.dispatch(handler);
            break;
        }

        case 109:
        {
            InquiryVote p(buffer);
            p.dispatch(handler);
            break;
        }

        case 110:
        {
            LeaveFaction p(buffer);
            p.dispatch(handler);
            break;
        }

        case 111:
        {
            BankExtractGold p(buffer);
            p.dispatch(handler);
            break;
        }

        case 112:
        {
            BankDepositGold p(buffer);
            p.dispatch(handler);
            break;
        }

        case 113:
        {
            Denounce p(buffer);
            p.dispatch(handler);
            break;
        }

        case 114:
        {
            GuildFundate p(buffer);
            p.dispatch(handler);
            break;
        }

        case 115:
        {
            GuildFundation p(buffer);
            p.dispatch(handler);
            break;
        }

        case 116:
        {
            PartyKick p(buffer);
            p.dispatch(handler);
            break;
        }

        case 117:
        {
            PartySetLeader p(buffer);
            p.dispatch(handler);
            break;
        }

        case 118:
        {
            PartyAcceptMember p(buffer);
            p.dispatch(handler);
            break;
        }

        case 119:
        {
            Ping p(buffer);
            p.dispatch(handler);
            break;
        }

        case 120:
        {
            RequestPartyForm p(buffer);
            p.dispatch(handler);
            break;
        }

        case 121:
        {
            ItemUpgrade p(buffer);
            p.dispatch(handler);
            break;
        }

        case 122:
        {
            GMCommands p(buffer);
            p.dispatch(handler);
            break;
        }

        case 123:
        {
            InitCrafting p(buffer);
            p.dispatch(handler);
            break;
        }

        case 124:
        {
            Home p(buffer);
            p.dispatch(handler);
            break;
        }

        case 125:
        {
            ShowGuildNews p(buffer);
            p.dispatch(handler);
            break;
        }

        case 126:
        {
            ShareNpc p(buffer);
            p.dispatch(handler);
            break;
        }

        case 127:
        {
            StopSharingNpc p(buffer);
            p.dispatch(handler);
            break;
        }

        case 128:
        {
            Consultation p(buffer);
            p.dispatch(handler);
            break;
        }

        case 129:
        {
            MoveItem p(buffer);
            p.dispatch(handler);
            break;
        }

        default:
        {
            std::stringstream ss;
            ss << "error decoding packet id: " << PacketID;
            throw PacketDecodingError(ss.str());
        }
    }
}

LoginExistingChar::LoginExistingChar() : ClientPacket(ClientPacketID_LoginExistingChar /* 0 */), UserName(), Password(), VerA(), VerB(), VerC() {
}

LoginExistingChar::LoginExistingChar(clsByteQueue* buffer) : ClientPacket(ClientPacketID_LoginExistingChar /* 0 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    Password = buffer->ReadUnicodeString();
    VerA = buffer->ReadByte();
    VerB = buffer->ReadByte();
    VerC = buffer->ReadByte();

}

LoginExistingChar::LoginExistingChar(const std::string& UserName_, const std::string& Password_, std::uint8_t VerA_, std::uint8_t VerB_, std::uint8_t VerC_) : ClientPacket(ClientPacketID_LoginExistingChar /* 0 */), UserName(UserName_), Password(Password_), VerA(VerA_), VerB(VerB_), VerC(VerC_) {
}

void LoginExistingChar::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_LoginExistingChar); /* PacketID: 0 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteUnicodeString(Password);
    buffer->WriteByte(VerA);
    buffer->WriteByte(VerB);
    buffer->WriteByte(VerC);

}

void LoginExistingChar::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleLoginExistingChar(this);
}

ThrowDices::ThrowDices() : ClientPacket(ClientPacketID_ThrowDices /* 1 */) {
}

ThrowDices::ThrowDices(clsByteQueue* buffer) : ClientPacket(ClientPacketID_ThrowDices /* 1 */) {
    buffer->ReadByte(); /* PacketID */

}

void ThrowDices::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_ThrowDices); /* PacketID: 1 */

}

void ThrowDices::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleThrowDices(this);
}

LoginNewChar::LoginNewChar() : ClientPacket(ClientPacketID_LoginNewChar /* 2 */), UserName(), Password(), VerA(), VerB(), VerC(), Race(), Gender(), Class(), Head(), Mail(), Homeland() {
}

LoginNewChar::LoginNewChar(clsByteQueue* buffer) : ClientPacket(ClientPacketID_LoginNewChar /* 2 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    Password = buffer->ReadUnicodeString();
    VerA = buffer->ReadByte();
    VerB = buffer->ReadByte();
    VerC = buffer->ReadByte();
    Race = buffer->ReadByte();
    Gender = buffer->ReadByte();
    Class = buffer->ReadByte();
    Head = buffer->ReadInteger();
    Mail = buffer->ReadUnicodeString();
    Homeland = buffer->ReadByte();

}

LoginNewChar::LoginNewChar(const std::string& UserName_, const std::string& Password_, std::uint8_t VerA_, std::uint8_t VerB_, std::uint8_t VerC_, std::uint8_t Race_, std::uint8_t Gender_, std::uint8_t Class_, std::int16_t Head_, const std::string& Mail_, std::uint8_t Homeland_) : ClientPacket(ClientPacketID_LoginNewChar /* 2 */), UserName(UserName_), Password(Password_), VerA(VerA_), VerB(VerB_), VerC(VerC_), Race(Race_), Gender(Gender_), Class(Class_), Head(Head_), Mail(Mail_), Homeland(Homeland_) {
}

void LoginNewChar::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_LoginNewChar); /* PacketID: 2 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteUnicodeString(Password);
    buffer->WriteByte(VerA);
    buffer->WriteByte(VerB);
    buffer->WriteByte(VerC);
    buffer->WriteByte(Race);
    buffer->WriteByte(Gender);
    buffer->WriteByte(Class);
    buffer->WriteInteger(Head);
    buffer->WriteUnicodeString(Mail);
    buffer->WriteByte(Homeland);

}

void LoginNewChar::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleLoginNewChar(this);
}

Talk::Talk() : ClientPacket(ClientPacketID_Talk /* 3 */), Chat() {
}

Talk::Talk(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Talk /* 3 */) {
    buffer->ReadByte(); /* PacketID */
    Chat = buffer->ReadUnicodeString();

}

Talk::Talk(const std::string& Chat_) : ClientPacket(ClientPacketID_Talk /* 3 */), Chat(Chat_) {
}

void Talk::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Talk); /* PacketID: 3 */
    buffer->WriteUnicodeString(Chat);

}

void Talk::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleTalk(this);
}

Yell::Yell() : ClientPacket(ClientPacketID_Yell /* 4 */), Chat() {
}

Yell::Yell(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Yell /* 4 */) {
    buffer->ReadByte(); /* PacketID */
    Chat = buffer->ReadUnicodeString();

}

Yell::Yell(const std::string& Chat_) : ClientPacket(ClientPacketID_Yell /* 4 */), Chat(Chat_) {
}

void Yell::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Yell); /* PacketID: 4 */
    buffer->WriteUnicodeString(Chat);

}

void Yell::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleYell(this);
}

Whisper::Whisper() : ClientPacket(ClientPacketID_Whisper /* 5 */), TargetName(), Chat() {
}

Whisper::Whisper(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Whisper /* 5 */) {
    buffer->ReadByte(); /* PacketID */
    TargetName = buffer->ReadUnicodeString();
    Chat = buffer->ReadUnicodeString();

}

Whisper::Whisper(const std::string& TargetName_, const std::string& Chat_) : ClientPacket(ClientPacketID_Whisper /* 5 */), TargetName(TargetName_), Chat(Chat_) {
}

void Whisper::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Whisper); /* PacketID: 5 */
    buffer->WriteUnicodeString(TargetName);
    buffer->WriteUnicodeString(Chat);

}

void Whisper::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleWhisper(this);
}

Walk::Walk() : ClientPacket(ClientPacketID_Walk /* 6 */), Heading() {
}

Walk::Walk(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Walk /* 6 */) {
    buffer->ReadByte(); /* PacketID */
    Heading = buffer->ReadByte();

}

Walk::Walk(std::uint8_t Heading_) : ClientPacket(ClientPacketID_Walk /* 6 */), Heading(Heading_) {
}

void Walk::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Walk); /* PacketID: 6 */
    buffer->WriteByte(Heading);

}

void Walk::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleWalk(this);
}

RequestPositionUpdate::RequestPositionUpdate() : ClientPacket(ClientPacketID_RequestPositionUpdate /* 7 */) {
}

RequestPositionUpdate::RequestPositionUpdate(clsByteQueue* buffer) : ClientPacket(ClientPacketID_RequestPositionUpdate /* 7 */) {
    buffer->ReadByte(); /* PacketID */

}

void RequestPositionUpdate::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_RequestPositionUpdate); /* PacketID: 7 */

}

void RequestPositionUpdate::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleRequestPositionUpdate(this);
}

Attack::Attack() : ClientPacket(ClientPacketID_Attack /* 8 */) {
}

Attack::Attack(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Attack /* 8 */) {
    buffer->ReadByte(); /* PacketID */

}

void Attack::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Attack); /* PacketID: 8 */

}

void Attack::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleAttack(this);
}

PickUp::PickUp() : ClientPacket(ClientPacketID_PickUp /* 9 */) {
}

PickUp::PickUp(clsByteQueue* buffer) : ClientPacket(ClientPacketID_PickUp /* 9 */) {
    buffer->ReadByte(); /* PacketID */

}

void PickUp::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_PickUp); /* PacketID: 9 */

}

void PickUp::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handlePickUp(this);
}

SafeToggle::SafeToggle() : ClientPacket(ClientPacketID_SafeToggle /* 10 */) {
}

SafeToggle::SafeToggle(clsByteQueue* buffer) : ClientPacket(ClientPacketID_SafeToggle /* 10 */) {
    buffer->ReadByte(); /* PacketID */

}

void SafeToggle::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_SafeToggle); /* PacketID: 10 */

}

void SafeToggle::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleSafeToggle(this);
}

ResuscitationSafeToggle::ResuscitationSafeToggle() : ClientPacket(ClientPacketID_ResuscitationSafeToggle /* 11 */) {
}

ResuscitationSafeToggle::ResuscitationSafeToggle(clsByteQueue* buffer) : ClientPacket(ClientPacketID_ResuscitationSafeToggle /* 11 */) {
    buffer->ReadByte(); /* PacketID */

}

void ResuscitationSafeToggle::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_ResuscitationSafeToggle); /* PacketID: 11 */

}

void ResuscitationSafeToggle::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleResuscitationSafeToggle(this);
}

RequestGuildLeaderInfo::RequestGuildLeaderInfo() : ClientPacket(ClientPacketID_RequestGuildLeaderInfo /* 12 */) {
}

RequestGuildLeaderInfo::RequestGuildLeaderInfo(clsByteQueue* buffer) : ClientPacket(ClientPacketID_RequestGuildLeaderInfo /* 12 */) {
    buffer->ReadByte(); /* PacketID */

}

void RequestGuildLeaderInfo::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_RequestGuildLeaderInfo); /* PacketID: 12 */

}

void RequestGuildLeaderInfo::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleRequestGuildLeaderInfo(this);
}

RequestAtributes::RequestAtributes() : ClientPacket(ClientPacketID_RequestAtributes /* 13 */) {
}

RequestAtributes::RequestAtributes(clsByteQueue* buffer) : ClientPacket(ClientPacketID_RequestAtributes /* 13 */) {
    buffer->ReadByte(); /* PacketID */

}

void RequestAtributes::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_RequestAtributes); /* PacketID: 13 */

}

void RequestAtributes::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleRequestAtributes(this);
}

RequestFame::RequestFame() : ClientPacket(ClientPacketID_RequestFame /* 14 */) {
}

RequestFame::RequestFame(clsByteQueue* buffer) : ClientPacket(ClientPacketID_RequestFame /* 14 */) {
    buffer->ReadByte(); /* PacketID */

}

void RequestFame::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_RequestFame); /* PacketID: 14 */

}

void RequestFame::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleRequestFame(this);
}

RequestSkills::RequestSkills() : ClientPacket(ClientPacketID_RequestSkills /* 15 */) {
}

RequestSkills::RequestSkills(clsByteQueue* buffer) : ClientPacket(ClientPacketID_RequestSkills /* 15 */) {
    buffer->ReadByte(); /* PacketID */

}

void RequestSkills::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_RequestSkills); /* PacketID: 15 */

}

void RequestSkills::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleRequestSkills(this);
}

RequestMiniStats::RequestMiniStats() : ClientPacket(ClientPacketID_RequestMiniStats /* 16 */) {
}

RequestMiniStats::RequestMiniStats(clsByteQueue* buffer) : ClientPacket(ClientPacketID_RequestMiniStats /* 16 */) {
    buffer->ReadByte(); /* PacketID */

}

void RequestMiniStats::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_RequestMiniStats); /* PacketID: 16 */

}

void RequestMiniStats::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleRequestMiniStats(this);
}

CommerceEnd::CommerceEnd() : ClientPacket(ClientPacketID_CommerceEnd /* 17 */) {
}

CommerceEnd::CommerceEnd(clsByteQueue* buffer) : ClientPacket(ClientPacketID_CommerceEnd /* 17 */) {
    buffer->ReadByte(); /* PacketID */

}

void CommerceEnd::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_CommerceEnd); /* PacketID: 17 */

}

void CommerceEnd::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleCommerceEnd(this);
}

UserCommerceEnd::UserCommerceEnd() : ClientPacket(ClientPacketID_UserCommerceEnd /* 18 */) {
}

UserCommerceEnd::UserCommerceEnd(clsByteQueue* buffer) : ClientPacket(ClientPacketID_UserCommerceEnd /* 18 */) {
    buffer->ReadByte(); /* PacketID */

}

void UserCommerceEnd::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_UserCommerceEnd); /* PacketID: 18 */

}

void UserCommerceEnd::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleUserCommerceEnd(this);
}

UserCommerceConfirm::UserCommerceConfirm() : ClientPacket(ClientPacketID_UserCommerceConfirm /* 19 */) {
}

UserCommerceConfirm::UserCommerceConfirm(clsByteQueue* buffer) : ClientPacket(ClientPacketID_UserCommerceConfirm /* 19 */) {
    buffer->ReadByte(); /* PacketID */

}

void UserCommerceConfirm::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_UserCommerceConfirm); /* PacketID: 19 */

}

void UserCommerceConfirm::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleUserCommerceConfirm(this);
}

CommerceChat::CommerceChat() : ClientPacket(ClientPacketID_CommerceChat /* 20 */), Chat() {
}

CommerceChat::CommerceChat(clsByteQueue* buffer) : ClientPacket(ClientPacketID_CommerceChat /* 20 */) {
    buffer->ReadByte(); /* PacketID */
    Chat = buffer->ReadUnicodeString();

}

CommerceChat::CommerceChat(const std::string& Chat_) : ClientPacket(ClientPacketID_CommerceChat /* 20 */), Chat(Chat_) {
}

void CommerceChat::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_CommerceChat); /* PacketID: 20 */
    buffer->WriteUnicodeString(Chat);

}

void CommerceChat::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleCommerceChat(this);
}

BankEnd::BankEnd() : ClientPacket(ClientPacketID_BankEnd /* 21 */) {
}

BankEnd::BankEnd(clsByteQueue* buffer) : ClientPacket(ClientPacketID_BankEnd /* 21 */) {
    buffer->ReadByte(); /* PacketID */

}

void BankEnd::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_BankEnd); /* PacketID: 21 */

}

void BankEnd::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleBankEnd(this);
}

UserCommerceOk::UserCommerceOk() : ClientPacket(ClientPacketID_UserCommerceOk /* 22 */) {
}

UserCommerceOk::UserCommerceOk(clsByteQueue* buffer) : ClientPacket(ClientPacketID_UserCommerceOk /* 22 */) {
    buffer->ReadByte(); /* PacketID */

}

void UserCommerceOk::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_UserCommerceOk); /* PacketID: 22 */

}

void UserCommerceOk::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleUserCommerceOk(this);
}

UserCommerceReject::UserCommerceReject() : ClientPacket(ClientPacketID_UserCommerceReject /* 23 */) {
}

UserCommerceReject::UserCommerceReject(clsByteQueue* buffer) : ClientPacket(ClientPacketID_UserCommerceReject /* 23 */) {
    buffer->ReadByte(); /* PacketID */

}

void UserCommerceReject::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_UserCommerceReject); /* PacketID: 23 */

}

void UserCommerceReject::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleUserCommerceReject(this);
}

Drop::Drop() : ClientPacket(ClientPacketID_Drop /* 24 */), Slot(), Amount() {
}

Drop::Drop(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Drop /* 24 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();
    Amount = buffer->ReadInteger();

}

Drop::Drop(std::uint8_t Slot_, std::int16_t Amount_) : ClientPacket(ClientPacketID_Drop /* 24 */), Slot(Slot_), Amount(Amount_) {
}

void Drop::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Drop); /* PacketID: 24 */
    buffer->WriteByte(Slot);
    buffer->WriteInteger(Amount);

}

void Drop::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleDrop(this);
}

CastSpell::CastSpell() : ClientPacket(ClientPacketID_CastSpell /* 25 */), Spell() {
}

CastSpell::CastSpell(clsByteQueue* buffer) : ClientPacket(ClientPacketID_CastSpell /* 25 */) {
    buffer->ReadByte(); /* PacketID */
    Spell = buffer->ReadByte();

}

CastSpell::CastSpell(std::uint8_t Spell_) : ClientPacket(ClientPacketID_CastSpell /* 25 */), Spell(Spell_) {
}

void CastSpell::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_CastSpell); /* PacketID: 25 */
    buffer->WriteByte(Spell);

}

void CastSpell::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleCastSpell(this);
}

LeftClick::LeftClick() : ClientPacket(ClientPacketID_LeftClick /* 26 */), X(), Y() {
}

LeftClick::LeftClick(clsByteQueue* buffer) : ClientPacket(ClientPacketID_LeftClick /* 26 */) {
    buffer->ReadByte(); /* PacketID */
    X = buffer->ReadByte();
    Y = buffer->ReadByte();

}

LeftClick::LeftClick(std::uint8_t X_, std::uint8_t Y_) : ClientPacket(ClientPacketID_LeftClick /* 26 */), X(X_), Y(Y_) {
}

void LeftClick::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_LeftClick); /* PacketID: 26 */
    buffer->WriteByte(X);
    buffer->WriteByte(Y);

}

void LeftClick::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleLeftClick(this);
}

DoubleClick::DoubleClick() : ClientPacket(ClientPacketID_DoubleClick /* 27 */), X(), Y() {
}

DoubleClick::DoubleClick(clsByteQueue* buffer) : ClientPacket(ClientPacketID_DoubleClick /* 27 */) {
    buffer->ReadByte(); /* PacketID */
    X = buffer->ReadByte();
    Y = buffer->ReadByte();

}

DoubleClick::DoubleClick(std::uint8_t X_, std::uint8_t Y_) : ClientPacket(ClientPacketID_DoubleClick /* 27 */), X(X_), Y(Y_) {
}

void DoubleClick::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_DoubleClick); /* PacketID: 27 */
    buffer->WriteByte(X);
    buffer->WriteByte(Y);

}

void DoubleClick::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleDoubleClick(this);
}

Work::Work() : ClientPacket(ClientPacketID_Work /* 28 */), Skill() {
}

Work::Work(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Work /* 28 */) {
    buffer->ReadByte(); /* PacketID */
    Skill = buffer->ReadByte();

}

Work::Work(std::uint8_t Skill_) : ClientPacket(ClientPacketID_Work /* 28 */), Skill(Skill_) {
}

void Work::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Work); /* PacketID: 28 */
    buffer->WriteByte(Skill);

}

void Work::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleWork(this);
}

UseSpellMacro::UseSpellMacro() : ClientPacket(ClientPacketID_UseSpellMacro /* 29 */) {
}

UseSpellMacro::UseSpellMacro(clsByteQueue* buffer) : ClientPacket(ClientPacketID_UseSpellMacro /* 29 */) {
    buffer->ReadByte(); /* PacketID */

}

void UseSpellMacro::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_UseSpellMacro); /* PacketID: 29 */

}

void UseSpellMacro::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleUseSpellMacro(this);
}

UseItem::UseItem() : ClientPacket(ClientPacketID_UseItem /* 30 */), Slot() {
}

UseItem::UseItem(clsByteQueue* buffer) : ClientPacket(ClientPacketID_UseItem /* 30 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();

}

UseItem::UseItem(std::uint8_t Slot_) : ClientPacket(ClientPacketID_UseItem /* 30 */), Slot(Slot_) {
}

void UseItem::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_UseItem); /* PacketID: 30 */
    buffer->WriteByte(Slot);

}

void UseItem::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleUseItem(this);
}

CraftBlacksmith::CraftBlacksmith() : ClientPacket(ClientPacketID_CraftBlacksmith /* 31 */), Item() {
}

CraftBlacksmith::CraftBlacksmith(clsByteQueue* buffer) : ClientPacket(ClientPacketID_CraftBlacksmith /* 31 */) {
    buffer->ReadByte(); /* PacketID */
    Item = buffer->ReadInteger();

}

CraftBlacksmith::CraftBlacksmith(std::int16_t Item_) : ClientPacket(ClientPacketID_CraftBlacksmith /* 31 */), Item(Item_) {
}

void CraftBlacksmith::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_CraftBlacksmith); /* PacketID: 31 */
    buffer->WriteInteger(Item);

}

void CraftBlacksmith::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleCraftBlacksmith(this);
}

CraftCarpenter::CraftCarpenter() : ClientPacket(ClientPacketID_CraftCarpenter /* 32 */), Item() {
}

CraftCarpenter::CraftCarpenter(clsByteQueue* buffer) : ClientPacket(ClientPacketID_CraftCarpenter /* 32 */) {
    buffer->ReadByte(); /* PacketID */
    Item = buffer->ReadInteger();

}

CraftCarpenter::CraftCarpenter(std::int16_t Item_) : ClientPacket(ClientPacketID_CraftCarpenter /* 32 */), Item(Item_) {
}

void CraftCarpenter::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_CraftCarpenter); /* PacketID: 32 */
    buffer->WriteInteger(Item);

}

void CraftCarpenter::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleCraftCarpenter(this);
}

WorkLeftClick::WorkLeftClick() : ClientPacket(ClientPacketID_WorkLeftClick /* 33 */), X(), Y(), Skill() {
}

WorkLeftClick::WorkLeftClick(clsByteQueue* buffer) : ClientPacket(ClientPacketID_WorkLeftClick /* 33 */) {
    buffer->ReadByte(); /* PacketID */
    X = buffer->ReadByte();
    Y = buffer->ReadByte();
    Skill = buffer->ReadByte();

}

WorkLeftClick::WorkLeftClick(std::uint8_t X_, std::uint8_t Y_, std::uint8_t Skill_) : ClientPacket(ClientPacketID_WorkLeftClick /* 33 */), X(X_), Y(Y_), Skill(Skill_) {
}

void WorkLeftClick::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_WorkLeftClick); /* PacketID: 33 */
    buffer->WriteByte(X);
    buffer->WriteByte(Y);
    buffer->WriteByte(Skill);

}

void WorkLeftClick::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleWorkLeftClick(this);
}

CreateNewGuild::CreateNewGuild() : ClientPacket(ClientPacketID_CreateNewGuild /* 34 */), Desc(), GuildName(), Site(), Codex() {
}

CreateNewGuild::CreateNewGuild(clsByteQueue* buffer) : ClientPacket(ClientPacketID_CreateNewGuild /* 34 */) {
    buffer->ReadByte(); /* PacketID */
    Desc = buffer->ReadUnicodeString();
    GuildName = buffer->ReadUnicodeString();
    Site = buffer->ReadUnicodeString();
    Codex = buffer->ReadUnicodeString();

}

CreateNewGuild::CreateNewGuild(const std::string& Desc_, const std::string& GuildName_, const std::string& Site_, const std::string& Codex_) : ClientPacket(ClientPacketID_CreateNewGuild /* 34 */), Desc(Desc_), GuildName(GuildName_), Site(Site_), Codex(Codex_) {
}

void CreateNewGuild::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_CreateNewGuild); /* PacketID: 34 */
    buffer->WriteUnicodeString(Desc);
    buffer->WriteUnicodeString(GuildName);
    buffer->WriteUnicodeString(Site);
    buffer->WriteUnicodeString(Codex);

}

void CreateNewGuild::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleCreateNewGuild(this);
}

SpellInfo::SpellInfo() : ClientPacket(ClientPacketID_SpellInfo /* 35 */), Slot() {
}

SpellInfo::SpellInfo(clsByteQueue* buffer) : ClientPacket(ClientPacketID_SpellInfo /* 35 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();

}

SpellInfo::SpellInfo(std::uint8_t Slot_) : ClientPacket(ClientPacketID_SpellInfo /* 35 */), Slot(Slot_) {
}

void SpellInfo::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_SpellInfo); /* PacketID: 35 */
    buffer->WriteByte(Slot);

}

void SpellInfo::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleSpellInfo(this);
}

EquipItem::EquipItem() : ClientPacket(ClientPacketID_EquipItem /* 36 */), Slot() {
}

EquipItem::EquipItem(clsByteQueue* buffer) : ClientPacket(ClientPacketID_EquipItem /* 36 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();

}

EquipItem::EquipItem(std::uint8_t Slot_) : ClientPacket(ClientPacketID_EquipItem /* 36 */), Slot(Slot_) {
}

void EquipItem::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_EquipItem); /* PacketID: 36 */
    buffer->WriteByte(Slot);

}

void EquipItem::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleEquipItem(this);
}

ChangeHeading::ChangeHeading() : ClientPacket(ClientPacketID_ChangeHeading /* 37 */), Heading() {
}

ChangeHeading::ChangeHeading(clsByteQueue* buffer) : ClientPacket(ClientPacketID_ChangeHeading /* 37 */) {
    buffer->ReadByte(); /* PacketID */
    Heading = buffer->ReadByte();

}

ChangeHeading::ChangeHeading(std::uint8_t Heading_) : ClientPacket(ClientPacketID_ChangeHeading /* 37 */), Heading(Heading_) {
}

void ChangeHeading::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_ChangeHeading); /* PacketID: 37 */
    buffer->WriteByte(Heading);

}

void ChangeHeading::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleChangeHeading(this);
}

ModifySkills::ModifySkills() : ClientPacket(ClientPacketID_ModifySkills /* 38 */), Skills() {
}

ModifySkills::ModifySkills(clsByteQueue* buffer) : ClientPacket(ClientPacketID_ModifySkills /* 38 */) {
    buffer->ReadByte(); /* PacketID */
    { int i; Skills.resize(20); for (i=0; i<20; ++i) Skills[i] = buffer->ReadByte(); }

}

ModifySkills::ModifySkills(std::vector<std::uint8_t> Skills_ ) : ClientPacket(ClientPacketID_ModifySkills /* 38 */), Skills(Skills_) {
}

void ModifySkills::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_ModifySkills); /* PacketID: 38 */
    { int i; for (i=0; i<20; ++i) buffer->WriteByte(Skills[i]); }

}

void ModifySkills::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleModifySkills(this);
}

Train::Train() : ClientPacket(ClientPacketID_Train /* 39 */), PetIndex() {
}

Train::Train(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Train /* 39 */) {
    buffer->ReadByte(); /* PacketID */
    PetIndex = buffer->ReadByte();

}

Train::Train(std::uint8_t PetIndex_) : ClientPacket(ClientPacketID_Train /* 39 */), PetIndex(PetIndex_) {
}

void Train::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Train); /* PacketID: 39 */
    buffer->WriteByte(PetIndex);

}

void Train::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleTrain(this);
}

CommerceBuy::CommerceBuy() : ClientPacket(ClientPacketID_CommerceBuy /* 40 */), Slot(), Amount() {
}

CommerceBuy::CommerceBuy(clsByteQueue* buffer) : ClientPacket(ClientPacketID_CommerceBuy /* 40 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();
    Amount = buffer->ReadInteger();

}

CommerceBuy::CommerceBuy(std::uint8_t Slot_, std::int16_t Amount_) : ClientPacket(ClientPacketID_CommerceBuy /* 40 */), Slot(Slot_), Amount(Amount_) {
}

void CommerceBuy::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_CommerceBuy); /* PacketID: 40 */
    buffer->WriteByte(Slot);
    buffer->WriteInteger(Amount);

}

void CommerceBuy::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleCommerceBuy(this);
}

BankExtractItem::BankExtractItem() : ClientPacket(ClientPacketID_BankExtractItem /* 41 */), Slot(), Amount() {
}

BankExtractItem::BankExtractItem(clsByteQueue* buffer) : ClientPacket(ClientPacketID_BankExtractItem /* 41 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();
    Amount = buffer->ReadInteger();

}

BankExtractItem::BankExtractItem(std::uint8_t Slot_, std::int16_t Amount_) : ClientPacket(ClientPacketID_BankExtractItem /* 41 */), Slot(Slot_), Amount(Amount_) {
}

void BankExtractItem::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_BankExtractItem); /* PacketID: 41 */
    buffer->WriteByte(Slot);
    buffer->WriteInteger(Amount);

}

void BankExtractItem::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleBankExtractItem(this);
}

CommerceSell::CommerceSell() : ClientPacket(ClientPacketID_CommerceSell /* 42 */), Slot(), Amount() {
}

CommerceSell::CommerceSell(clsByteQueue* buffer) : ClientPacket(ClientPacketID_CommerceSell /* 42 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();
    Amount = buffer->ReadInteger();

}

CommerceSell::CommerceSell(std::uint8_t Slot_, std::int16_t Amount_) : ClientPacket(ClientPacketID_CommerceSell /* 42 */), Slot(Slot_), Amount(Amount_) {
}

void CommerceSell::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_CommerceSell); /* PacketID: 42 */
    buffer->WriteByte(Slot);
    buffer->WriteInteger(Amount);

}

void CommerceSell::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleCommerceSell(this);
}

BankDeposit::BankDeposit() : ClientPacket(ClientPacketID_BankDeposit /* 43 */), Slot(), Amount() {
}

BankDeposit::BankDeposit(clsByteQueue* buffer) : ClientPacket(ClientPacketID_BankDeposit /* 43 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();
    Amount = buffer->ReadInteger();

}

BankDeposit::BankDeposit(std::uint8_t Slot_, std::int16_t Amount_) : ClientPacket(ClientPacketID_BankDeposit /* 43 */), Slot(Slot_), Amount(Amount_) {
}

void BankDeposit::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_BankDeposit); /* PacketID: 43 */
    buffer->WriteByte(Slot);
    buffer->WriteInteger(Amount);

}

void BankDeposit::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleBankDeposit(this);
}

ForumPost::ForumPost() : ClientPacket(ClientPacketID_ForumPost /* 44 */), MsgType(), Title(), Post() {
}

ForumPost::ForumPost(clsByteQueue* buffer) : ClientPacket(ClientPacketID_ForumPost /* 44 */) {
    buffer->ReadByte(); /* PacketID */
    MsgType = buffer->ReadByte();
    Title = buffer->ReadUnicodeString();
    Post = buffer->ReadUnicodeString();

}

ForumPost::ForumPost(std::uint8_t MsgType_, const std::string& Title_, const std::string& Post_) : ClientPacket(ClientPacketID_ForumPost /* 44 */), MsgType(MsgType_), Title(Title_), Post(Post_) {
}

void ForumPost::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_ForumPost); /* PacketID: 44 */
    buffer->WriteByte(MsgType);
    buffer->WriteUnicodeString(Title);
    buffer->WriteUnicodeString(Post);

}

void ForumPost::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleForumPost(this);
}

MoveSpell::MoveSpell() : ClientPacket(ClientPacketID_MoveSpell /* 45 */), Direction(), Slot() {
}

MoveSpell::MoveSpell(clsByteQueue* buffer) : ClientPacket(ClientPacketID_MoveSpell /* 45 */) {
    buffer->ReadByte(); /* PacketID */
    Direction = buffer->ReadBoolean();
    Slot = buffer->ReadByte();

}

MoveSpell::MoveSpell(bool Direction_, std::uint8_t Slot_) : ClientPacket(ClientPacketID_MoveSpell /* 45 */), Direction(Direction_), Slot(Slot_) {
}

void MoveSpell::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_MoveSpell); /* PacketID: 45 */
    buffer->WriteBoolean(Direction);
    buffer->WriteByte(Slot);

}

void MoveSpell::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleMoveSpell(this);
}

MoveBank::MoveBank() : ClientPacket(ClientPacketID_MoveBank /* 46 */), Direction(), Slot() {
}

MoveBank::MoveBank(clsByteQueue* buffer) : ClientPacket(ClientPacketID_MoveBank /* 46 */) {
    buffer->ReadByte(); /* PacketID */
    Direction = buffer->ReadBoolean();
    Slot = buffer->ReadByte();

}

MoveBank::MoveBank(bool Direction_, std::uint8_t Slot_) : ClientPacket(ClientPacketID_MoveBank /* 46 */), Direction(Direction_), Slot(Slot_) {
}

void MoveBank::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_MoveBank); /* PacketID: 46 */
    buffer->WriteBoolean(Direction);
    buffer->WriteByte(Slot);

}

void MoveBank::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleMoveBank(this);
}

ClanCodexUpdate::ClanCodexUpdate() : ClientPacket(ClientPacketID_ClanCodexUpdate /* 47 */), Desc(), Codex() {
}

ClanCodexUpdate::ClanCodexUpdate(clsByteQueue* buffer) : ClientPacket(ClientPacketID_ClanCodexUpdate /* 47 */) {
    buffer->ReadByte(); /* PacketID */
    Desc = buffer->ReadUnicodeString();
    Codex = buffer->ReadUnicodeString();

}

ClanCodexUpdate::ClanCodexUpdate(const std::string& Desc_, const std::string& Codex_) : ClientPacket(ClientPacketID_ClanCodexUpdate /* 47 */), Desc(Desc_), Codex(Codex_) {
}

void ClanCodexUpdate::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_ClanCodexUpdate); /* PacketID: 47 */
    buffer->WriteUnicodeString(Desc);
    buffer->WriteUnicodeString(Codex);

}

void ClanCodexUpdate::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleClanCodexUpdate(this);
}

UserCommerceOffer::UserCommerceOffer() : ClientPacket(ClientPacketID_UserCommerceOffer /* 48 */), Slot(), Amount(), OfferSlot() {
}

UserCommerceOffer::UserCommerceOffer(clsByteQueue* buffer) : ClientPacket(ClientPacketID_UserCommerceOffer /* 48 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();
    Amount = buffer->ReadLong();
    OfferSlot = buffer->ReadByte();

}

UserCommerceOffer::UserCommerceOffer(std::uint8_t Slot_, std::int32_t Amount_, std::uint8_t OfferSlot_) : ClientPacket(ClientPacketID_UserCommerceOffer /* 48 */), Slot(Slot_), Amount(Amount_), OfferSlot(OfferSlot_) {
}

void UserCommerceOffer::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_UserCommerceOffer); /* PacketID: 48 */
    buffer->WriteByte(Slot);
    buffer->WriteLong(Amount);
    buffer->WriteByte(OfferSlot);

}

void UserCommerceOffer::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleUserCommerceOffer(this);
}

GuildAcceptPeace::GuildAcceptPeace() : ClientPacket(ClientPacketID_GuildAcceptPeace /* 49 */), Guild() {
}

GuildAcceptPeace::GuildAcceptPeace(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildAcceptPeace /* 49 */) {
    buffer->ReadByte(); /* PacketID */
    Guild = buffer->ReadUnicodeString();

}

GuildAcceptPeace::GuildAcceptPeace(const std::string& Guild_) : ClientPacket(ClientPacketID_GuildAcceptPeace /* 49 */), Guild(Guild_) {
}

void GuildAcceptPeace::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildAcceptPeace); /* PacketID: 49 */
    buffer->WriteUnicodeString(Guild);

}

void GuildAcceptPeace::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildAcceptPeace(this);
}

GuildRejectAlliance::GuildRejectAlliance() : ClientPacket(ClientPacketID_GuildRejectAlliance /* 50 */), Guild() {
}

GuildRejectAlliance::GuildRejectAlliance(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildRejectAlliance /* 50 */) {
    buffer->ReadByte(); /* PacketID */
    Guild = buffer->ReadUnicodeString();

}

GuildRejectAlliance::GuildRejectAlliance(const std::string& Guild_) : ClientPacket(ClientPacketID_GuildRejectAlliance /* 50 */), Guild(Guild_) {
}

void GuildRejectAlliance::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildRejectAlliance); /* PacketID: 50 */
    buffer->WriteUnicodeString(Guild);

}

void GuildRejectAlliance::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildRejectAlliance(this);
}

GuildRejectPeace::GuildRejectPeace() : ClientPacket(ClientPacketID_GuildRejectPeace /* 51 */), Guild() {
}

GuildRejectPeace::GuildRejectPeace(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildRejectPeace /* 51 */) {
    buffer->ReadByte(); /* PacketID */
    Guild = buffer->ReadUnicodeString();

}

GuildRejectPeace::GuildRejectPeace(const std::string& Guild_) : ClientPacket(ClientPacketID_GuildRejectPeace /* 51 */), Guild(Guild_) {
}

void GuildRejectPeace::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildRejectPeace); /* PacketID: 51 */
    buffer->WriteUnicodeString(Guild);

}

void GuildRejectPeace::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildRejectPeace(this);
}

GuildAcceptAlliance::GuildAcceptAlliance() : ClientPacket(ClientPacketID_GuildAcceptAlliance /* 52 */), Guild() {
}

GuildAcceptAlliance::GuildAcceptAlliance(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildAcceptAlliance /* 52 */) {
    buffer->ReadByte(); /* PacketID */
    Guild = buffer->ReadUnicodeString();

}

GuildAcceptAlliance::GuildAcceptAlliance(const std::string& Guild_) : ClientPacket(ClientPacketID_GuildAcceptAlliance /* 52 */), Guild(Guild_) {
}

void GuildAcceptAlliance::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildAcceptAlliance); /* PacketID: 52 */
    buffer->WriteUnicodeString(Guild);

}

void GuildAcceptAlliance::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildAcceptAlliance(this);
}

GuildOfferPeace::GuildOfferPeace() : ClientPacket(ClientPacketID_GuildOfferPeace /* 53 */), Guild(), Proposal() {
}

GuildOfferPeace::GuildOfferPeace(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildOfferPeace /* 53 */) {
    buffer->ReadByte(); /* PacketID */
    Guild = buffer->ReadUnicodeString();
    Proposal = buffer->ReadUnicodeString();

}

GuildOfferPeace::GuildOfferPeace(const std::string& Guild_, const std::string& Proposal_) : ClientPacket(ClientPacketID_GuildOfferPeace /* 53 */), Guild(Guild_), Proposal(Proposal_) {
}

void GuildOfferPeace::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildOfferPeace); /* PacketID: 53 */
    buffer->WriteUnicodeString(Guild);
    buffer->WriteUnicodeString(Proposal);

}

void GuildOfferPeace::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildOfferPeace(this);
}

GuildOfferAlliance::GuildOfferAlliance() : ClientPacket(ClientPacketID_GuildOfferAlliance /* 54 */), Guild(), Proposal() {
}

GuildOfferAlliance::GuildOfferAlliance(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildOfferAlliance /* 54 */) {
    buffer->ReadByte(); /* PacketID */
    Guild = buffer->ReadUnicodeString();
    Proposal = buffer->ReadUnicodeString();

}

GuildOfferAlliance::GuildOfferAlliance(const std::string& Guild_, const std::string& Proposal_) : ClientPacket(ClientPacketID_GuildOfferAlliance /* 54 */), Guild(Guild_), Proposal(Proposal_) {
}

void GuildOfferAlliance::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildOfferAlliance); /* PacketID: 54 */
    buffer->WriteUnicodeString(Guild);
    buffer->WriteUnicodeString(Proposal);

}

void GuildOfferAlliance::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildOfferAlliance(this);
}

GuildAllianceDetails::GuildAllianceDetails() : ClientPacket(ClientPacketID_GuildAllianceDetails /* 55 */), Guild() {
}

GuildAllianceDetails::GuildAllianceDetails(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildAllianceDetails /* 55 */) {
    buffer->ReadByte(); /* PacketID */
    Guild = buffer->ReadUnicodeString();

}

GuildAllianceDetails::GuildAllianceDetails(const std::string& Guild_) : ClientPacket(ClientPacketID_GuildAllianceDetails /* 55 */), Guild(Guild_) {
}

void GuildAllianceDetails::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildAllianceDetails); /* PacketID: 55 */
    buffer->WriteUnicodeString(Guild);

}

void GuildAllianceDetails::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildAllianceDetails(this);
}

GuildPeaceDetails::GuildPeaceDetails() : ClientPacket(ClientPacketID_GuildPeaceDetails /* 56 */), Guild() {
}

GuildPeaceDetails::GuildPeaceDetails(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildPeaceDetails /* 56 */) {
    buffer->ReadByte(); /* PacketID */
    Guild = buffer->ReadUnicodeString();

}

GuildPeaceDetails::GuildPeaceDetails(const std::string& Guild_) : ClientPacket(ClientPacketID_GuildPeaceDetails /* 56 */), Guild(Guild_) {
}

void GuildPeaceDetails::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildPeaceDetails); /* PacketID: 56 */
    buffer->WriteUnicodeString(Guild);

}

void GuildPeaceDetails::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildPeaceDetails(this);
}

GuildRequestJoinerInfo::GuildRequestJoinerInfo() : ClientPacket(ClientPacketID_GuildRequestJoinerInfo /* 57 */), User() {
}

GuildRequestJoinerInfo::GuildRequestJoinerInfo(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildRequestJoinerInfo /* 57 */) {
    buffer->ReadByte(); /* PacketID */
    User = buffer->ReadUnicodeString();

}

GuildRequestJoinerInfo::GuildRequestJoinerInfo(const std::string& User_) : ClientPacket(ClientPacketID_GuildRequestJoinerInfo /* 57 */), User(User_) {
}

void GuildRequestJoinerInfo::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildRequestJoinerInfo); /* PacketID: 57 */
    buffer->WriteUnicodeString(User);

}

void GuildRequestJoinerInfo::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildRequestJoinerInfo(this);
}

GuildAlliancePropList::GuildAlliancePropList() : ClientPacket(ClientPacketID_GuildAlliancePropList /* 58 */) {
}

GuildAlliancePropList::GuildAlliancePropList(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildAlliancePropList /* 58 */) {
    buffer->ReadByte(); /* PacketID */

}

void GuildAlliancePropList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildAlliancePropList); /* PacketID: 58 */

}

void GuildAlliancePropList::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildAlliancePropList(this);
}

GuildPeacePropList::GuildPeacePropList() : ClientPacket(ClientPacketID_GuildPeacePropList /* 59 */) {
}

GuildPeacePropList::GuildPeacePropList(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildPeacePropList /* 59 */) {
    buffer->ReadByte(); /* PacketID */

}

void GuildPeacePropList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildPeacePropList); /* PacketID: 59 */

}

void GuildPeacePropList::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildPeacePropList(this);
}

GuildDeclareWar::GuildDeclareWar() : ClientPacket(ClientPacketID_GuildDeclareWar /* 60 */), Guild() {
}

GuildDeclareWar::GuildDeclareWar(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildDeclareWar /* 60 */) {
    buffer->ReadByte(); /* PacketID */
    Guild = buffer->ReadUnicodeString();

}

GuildDeclareWar::GuildDeclareWar(const std::string& Guild_) : ClientPacket(ClientPacketID_GuildDeclareWar /* 60 */), Guild(Guild_) {
}

void GuildDeclareWar::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildDeclareWar); /* PacketID: 60 */
    buffer->WriteUnicodeString(Guild);

}

void GuildDeclareWar::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildDeclareWar(this);
}

GuildNewWebsite::GuildNewWebsite() : ClientPacket(ClientPacketID_GuildNewWebsite /* 61 */), Website() {
}

GuildNewWebsite::GuildNewWebsite(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildNewWebsite /* 61 */) {
    buffer->ReadByte(); /* PacketID */
    Website = buffer->ReadUnicodeString();

}

GuildNewWebsite::GuildNewWebsite(const std::string& Website_) : ClientPacket(ClientPacketID_GuildNewWebsite /* 61 */), Website(Website_) {
}

void GuildNewWebsite::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildNewWebsite); /* PacketID: 61 */
    buffer->WriteUnicodeString(Website);

}

void GuildNewWebsite::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildNewWebsite(this);
}

GuildAcceptNewMember::GuildAcceptNewMember() : ClientPacket(ClientPacketID_GuildAcceptNewMember /* 62 */), UserName() {
}

GuildAcceptNewMember::GuildAcceptNewMember(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildAcceptNewMember /* 62 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

GuildAcceptNewMember::GuildAcceptNewMember(const std::string& UserName_) : ClientPacket(ClientPacketID_GuildAcceptNewMember /* 62 */), UserName(UserName_) {
}

void GuildAcceptNewMember::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildAcceptNewMember); /* PacketID: 62 */
    buffer->WriteUnicodeString(UserName);

}

void GuildAcceptNewMember::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildAcceptNewMember(this);
}

GuildRejectNewMember::GuildRejectNewMember() : ClientPacket(ClientPacketID_GuildRejectNewMember /* 63 */), UserName(), Reason() {
}

GuildRejectNewMember::GuildRejectNewMember(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildRejectNewMember /* 63 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    Reason = buffer->ReadUnicodeString();

}

GuildRejectNewMember::GuildRejectNewMember(const std::string& UserName_, const std::string& Reason_) : ClientPacket(ClientPacketID_GuildRejectNewMember /* 63 */), UserName(UserName_), Reason(Reason_) {
}

void GuildRejectNewMember::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildRejectNewMember); /* PacketID: 63 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteUnicodeString(Reason);

}

void GuildRejectNewMember::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildRejectNewMember(this);
}

GuildKickMember::GuildKickMember() : ClientPacket(ClientPacketID_GuildKickMember /* 64 */), UserName() {
}

GuildKickMember::GuildKickMember(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildKickMember /* 64 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

GuildKickMember::GuildKickMember(const std::string& UserName_) : ClientPacket(ClientPacketID_GuildKickMember /* 64 */), UserName(UserName_) {
}

void GuildKickMember::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildKickMember); /* PacketID: 64 */
    buffer->WriteUnicodeString(UserName);

}

void GuildKickMember::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildKickMember(this);
}

GuildUpdateNews::GuildUpdateNews() : ClientPacket(ClientPacketID_GuildUpdateNews /* 65 */), News() {
}

GuildUpdateNews::GuildUpdateNews(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildUpdateNews /* 65 */) {
    buffer->ReadByte(); /* PacketID */
    News = buffer->ReadUnicodeString();

}

GuildUpdateNews::GuildUpdateNews(const std::string& News_) : ClientPacket(ClientPacketID_GuildUpdateNews /* 65 */), News(News_) {
}

void GuildUpdateNews::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildUpdateNews); /* PacketID: 65 */
    buffer->WriteUnicodeString(News);

}

void GuildUpdateNews::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildUpdateNews(this);
}

GuildMemberInfo::GuildMemberInfo() : ClientPacket(ClientPacketID_GuildMemberInfo /* 66 */), UserName() {
}

GuildMemberInfo::GuildMemberInfo(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildMemberInfo /* 66 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

GuildMemberInfo::GuildMemberInfo(const std::string& UserName_) : ClientPacket(ClientPacketID_GuildMemberInfo /* 66 */), UserName(UserName_) {
}

void GuildMemberInfo::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildMemberInfo); /* PacketID: 66 */
    buffer->WriteUnicodeString(UserName);

}

void GuildMemberInfo::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildMemberInfo(this);
}

GuildOpenElections::GuildOpenElections() : ClientPacket(ClientPacketID_GuildOpenElections /* 67 */) {
}

GuildOpenElections::GuildOpenElections(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildOpenElections /* 67 */) {
    buffer->ReadByte(); /* PacketID */

}

void GuildOpenElections::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildOpenElections); /* PacketID: 67 */

}

void GuildOpenElections::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildOpenElections(this);
}

GuildRequestMembership::GuildRequestMembership() : ClientPacket(ClientPacketID_GuildRequestMembership /* 68 */), Guild(), Application() {
}

GuildRequestMembership::GuildRequestMembership(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildRequestMembership /* 68 */) {
    buffer->ReadByte(); /* PacketID */
    Guild = buffer->ReadUnicodeString();
    Application = buffer->ReadUnicodeString();

}

GuildRequestMembership::GuildRequestMembership(const std::string& Guild_, const std::string& Application_) : ClientPacket(ClientPacketID_GuildRequestMembership /* 68 */), Guild(Guild_), Application(Application_) {
}

void GuildRequestMembership::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildRequestMembership); /* PacketID: 68 */
    buffer->WriteUnicodeString(Guild);
    buffer->WriteUnicodeString(Application);

}

void GuildRequestMembership::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildRequestMembership(this);
}

GuildRequestDetails::GuildRequestDetails() : ClientPacket(ClientPacketID_GuildRequestDetails /* 69 */), Guild() {
}

GuildRequestDetails::GuildRequestDetails(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildRequestDetails /* 69 */) {
    buffer->ReadByte(); /* PacketID */
    Guild = buffer->ReadUnicodeString();

}

GuildRequestDetails::GuildRequestDetails(const std::string& Guild_) : ClientPacket(ClientPacketID_GuildRequestDetails /* 69 */), Guild(Guild_) {
}

void GuildRequestDetails::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildRequestDetails); /* PacketID: 69 */
    buffer->WriteUnicodeString(Guild);

}

void GuildRequestDetails::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildRequestDetails(this);
}

Online::Online() : ClientPacket(ClientPacketID_Online /* 70 */) {
}

Online::Online(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Online /* 70 */) {
    buffer->ReadByte(); /* PacketID */

}

void Online::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Online); /* PacketID: 70 */

}

void Online::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleOnline(this);
}

Quit::Quit() : ClientPacket(ClientPacketID_Quit /* 71 */) {
}

Quit::Quit(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Quit /* 71 */) {
    buffer->ReadByte(); /* PacketID */

}

void Quit::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Quit); /* PacketID: 71 */

}

void Quit::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleQuit(this);
}

GuildLeave::GuildLeave() : ClientPacket(ClientPacketID_GuildLeave /* 72 */) {
}

GuildLeave::GuildLeave(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildLeave /* 72 */) {
    buffer->ReadByte(); /* PacketID */

}

void GuildLeave::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildLeave); /* PacketID: 72 */

}

void GuildLeave::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildLeave(this);
}

RequestAccountState::RequestAccountState() : ClientPacket(ClientPacketID_RequestAccountState /* 73 */) {
}

RequestAccountState::RequestAccountState(clsByteQueue* buffer) : ClientPacket(ClientPacketID_RequestAccountState /* 73 */) {
    buffer->ReadByte(); /* PacketID */

}

void RequestAccountState::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_RequestAccountState); /* PacketID: 73 */

}

void RequestAccountState::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleRequestAccountState(this);
}

PetStand::PetStand() : ClientPacket(ClientPacketID_PetStand /* 74 */) {
}

PetStand::PetStand(clsByteQueue* buffer) : ClientPacket(ClientPacketID_PetStand /* 74 */) {
    buffer->ReadByte(); /* PacketID */

}

void PetStand::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_PetStand); /* PacketID: 74 */

}

void PetStand::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handlePetStand(this);
}

PetFollow::PetFollow() : ClientPacket(ClientPacketID_PetFollow /* 75 */) {
}

PetFollow::PetFollow(clsByteQueue* buffer) : ClientPacket(ClientPacketID_PetFollow /* 75 */) {
    buffer->ReadByte(); /* PacketID */

}

void PetFollow::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_PetFollow); /* PacketID: 75 */

}

void PetFollow::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handlePetFollow(this);
}

ReleasePet::ReleasePet() : ClientPacket(ClientPacketID_ReleasePet /* 76 */) {
}

ReleasePet::ReleasePet(clsByteQueue* buffer) : ClientPacket(ClientPacketID_ReleasePet /* 76 */) {
    buffer->ReadByte(); /* PacketID */

}

void ReleasePet::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_ReleasePet); /* PacketID: 76 */

}

void ReleasePet::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleReleasePet(this);
}

TrainList::TrainList() : ClientPacket(ClientPacketID_TrainList /* 77 */) {
}

TrainList::TrainList(clsByteQueue* buffer) : ClientPacket(ClientPacketID_TrainList /* 77 */) {
    buffer->ReadByte(); /* PacketID */

}

void TrainList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_TrainList); /* PacketID: 77 */

}

void TrainList::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleTrainList(this);
}

Rest::Rest() : ClientPacket(ClientPacketID_Rest /* 78 */) {
}

Rest::Rest(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Rest /* 78 */) {
    buffer->ReadByte(); /* PacketID */

}

void Rest::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Rest); /* PacketID: 78 */

}

void Rest::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleRest(this);
}

Meditate::Meditate() : ClientPacket(ClientPacketID_Meditate /* 79 */) {
}

Meditate::Meditate(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Meditate /* 79 */) {
    buffer->ReadByte(); /* PacketID */

}

void Meditate::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Meditate); /* PacketID: 79 */

}

void Meditate::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleMeditate(this);
}

Resucitate::Resucitate() : ClientPacket(ClientPacketID_Resucitate /* 80 */) {
}

Resucitate::Resucitate(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Resucitate /* 80 */) {
    buffer->ReadByte(); /* PacketID */

}

void Resucitate::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Resucitate); /* PacketID: 80 */

}

void Resucitate::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleResucitate(this);
}

Heal::Heal() : ClientPacket(ClientPacketID_Heal /* 81 */) {
}

Heal::Heal(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Heal /* 81 */) {
    buffer->ReadByte(); /* PacketID */

}

void Heal::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Heal); /* PacketID: 81 */

}

void Heal::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleHeal(this);
}

Help::Help() : ClientPacket(ClientPacketID_Help /* 82 */) {
}

Help::Help(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Help /* 82 */) {
    buffer->ReadByte(); /* PacketID */

}

void Help::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Help); /* PacketID: 82 */

}

void Help::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleHelp(this);
}

RequestStats::RequestStats() : ClientPacket(ClientPacketID_RequestStats /* 83 */) {
}

RequestStats::RequestStats(clsByteQueue* buffer) : ClientPacket(ClientPacketID_RequestStats /* 83 */) {
    buffer->ReadByte(); /* PacketID */

}

void RequestStats::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_RequestStats); /* PacketID: 83 */

}

void RequestStats::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleRequestStats(this);
}

CommerceStart::CommerceStart() : ClientPacket(ClientPacketID_CommerceStart /* 84 */) {
}

CommerceStart::CommerceStart(clsByteQueue* buffer) : ClientPacket(ClientPacketID_CommerceStart /* 84 */) {
    buffer->ReadByte(); /* PacketID */

}

void CommerceStart::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_CommerceStart); /* PacketID: 84 */

}

void CommerceStart::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleCommerceStart(this);
}

BankStart::BankStart() : ClientPacket(ClientPacketID_BankStart /* 85 */) {
}

BankStart::BankStart(clsByteQueue* buffer) : ClientPacket(ClientPacketID_BankStart /* 85 */) {
    buffer->ReadByte(); /* PacketID */

}

void BankStart::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_BankStart); /* PacketID: 85 */

}

void BankStart::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleBankStart(this);
}

Enlist::Enlist() : ClientPacket(ClientPacketID_Enlist /* 86 */) {
}

Enlist::Enlist(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Enlist /* 86 */) {
    buffer->ReadByte(); /* PacketID */

}

void Enlist::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Enlist); /* PacketID: 86 */

}

void Enlist::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleEnlist(this);
}

Information::Information() : ClientPacket(ClientPacketID_Information /* 87 */) {
}

Information::Information(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Information /* 87 */) {
    buffer->ReadByte(); /* PacketID */

}

void Information::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Information); /* PacketID: 87 */

}

void Information::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleInformation(this);
}

Reward::Reward() : ClientPacket(ClientPacketID_Reward /* 88 */) {
}

Reward::Reward(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Reward /* 88 */) {
    buffer->ReadByte(); /* PacketID */

}

void Reward::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Reward); /* PacketID: 88 */

}

void Reward::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleReward(this);
}

RequestMOTD::RequestMOTD() : ClientPacket(ClientPacketID_RequestMOTD /* 89 */) {
}

RequestMOTD::RequestMOTD(clsByteQueue* buffer) : ClientPacket(ClientPacketID_RequestMOTD /* 89 */) {
    buffer->ReadByte(); /* PacketID */

}

void RequestMOTD::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_RequestMOTD); /* PacketID: 89 */

}

void RequestMOTD::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleRequestMOTD(this);
}

UpTime::UpTime() : ClientPacket(ClientPacketID_UpTime /* 90 */) {
}

UpTime::UpTime(clsByteQueue* buffer) : ClientPacket(ClientPacketID_UpTime /* 90 */) {
    buffer->ReadByte(); /* PacketID */

}

void UpTime::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_UpTime); /* PacketID: 90 */

}

void UpTime::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleUpTime(this);
}

PartyLeave::PartyLeave() : ClientPacket(ClientPacketID_PartyLeave /* 91 */) {
}

PartyLeave::PartyLeave(clsByteQueue* buffer) : ClientPacket(ClientPacketID_PartyLeave /* 91 */) {
    buffer->ReadByte(); /* PacketID */

}

void PartyLeave::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_PartyLeave); /* PacketID: 91 */

}

void PartyLeave::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handlePartyLeave(this);
}

PartyCreate::PartyCreate() : ClientPacket(ClientPacketID_PartyCreate /* 92 */) {
}

PartyCreate::PartyCreate(clsByteQueue* buffer) : ClientPacket(ClientPacketID_PartyCreate /* 92 */) {
    buffer->ReadByte(); /* PacketID */

}

void PartyCreate::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_PartyCreate); /* PacketID: 92 */

}

void PartyCreate::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handlePartyCreate(this);
}

PartyJoin::PartyJoin() : ClientPacket(ClientPacketID_PartyJoin /* 93 */) {
}

PartyJoin::PartyJoin(clsByteQueue* buffer) : ClientPacket(ClientPacketID_PartyJoin /* 93 */) {
    buffer->ReadByte(); /* PacketID */

}

void PartyJoin::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_PartyJoin); /* PacketID: 93 */

}

void PartyJoin::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handlePartyJoin(this);
}

Inquiry::Inquiry() : ClientPacket(ClientPacketID_Inquiry /* 94 */) {
}

Inquiry::Inquiry(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Inquiry /* 94 */) {
    buffer->ReadByte(); /* PacketID */

}

void Inquiry::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Inquiry); /* PacketID: 94 */

}

void Inquiry::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleInquiry(this);
}

GuildMessage::GuildMessage() : ClientPacket(ClientPacketID_GuildMessage /* 95 */), Chat() {
}

GuildMessage::GuildMessage(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildMessage /* 95 */) {
    buffer->ReadByte(); /* PacketID */
    Chat = buffer->ReadUnicodeString();

}

GuildMessage::GuildMessage(const std::string& Chat_) : ClientPacket(ClientPacketID_GuildMessage /* 95 */), Chat(Chat_) {
}

void GuildMessage::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildMessage); /* PacketID: 95 */
    buffer->WriteUnicodeString(Chat);

}

void GuildMessage::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildMessage(this);
}

PartyMessage::PartyMessage() : ClientPacket(ClientPacketID_PartyMessage /* 96 */), Chat() {
}

PartyMessage::PartyMessage(clsByteQueue* buffer) : ClientPacket(ClientPacketID_PartyMessage /* 96 */) {
    buffer->ReadByte(); /* PacketID */
    Chat = buffer->ReadUnicodeString();

}

PartyMessage::PartyMessage(const std::string& Chat_) : ClientPacket(ClientPacketID_PartyMessage /* 96 */), Chat(Chat_) {
}

void PartyMessage::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_PartyMessage); /* PacketID: 96 */
    buffer->WriteUnicodeString(Chat);

}

void PartyMessage::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handlePartyMessage(this);
}

CentinelReport::CentinelReport() : ClientPacket(ClientPacketID_CentinelReport /* 97 */), Code() {
}

CentinelReport::CentinelReport(clsByteQueue* buffer) : ClientPacket(ClientPacketID_CentinelReport /* 97 */) {
    buffer->ReadByte(); /* PacketID */
    Code = buffer->ReadInteger();

}

CentinelReport::CentinelReport(std::int16_t Code_) : ClientPacket(ClientPacketID_CentinelReport /* 97 */), Code(Code_) {
}

void CentinelReport::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_CentinelReport); /* PacketID: 97 */
    buffer->WriteInteger(Code);

}

void CentinelReport::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleCentinelReport(this);
}

GuildOnline::GuildOnline() : ClientPacket(ClientPacketID_GuildOnline /* 98 */) {
}

GuildOnline::GuildOnline(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildOnline /* 98 */) {
    buffer->ReadByte(); /* PacketID */

}

void GuildOnline::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildOnline); /* PacketID: 98 */

}

void GuildOnline::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildOnline(this);
}

PartyOnline::PartyOnline() : ClientPacket(ClientPacketID_PartyOnline /* 99 */) {
}

PartyOnline::PartyOnline(clsByteQueue* buffer) : ClientPacket(ClientPacketID_PartyOnline /* 99 */) {
    buffer->ReadByte(); /* PacketID */

}

void PartyOnline::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_PartyOnline); /* PacketID: 99 */

}

void PartyOnline::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handlePartyOnline(this);
}

CouncilMessage::CouncilMessage() : ClientPacket(ClientPacketID_CouncilMessage /* 100 */), Chat() {
}

CouncilMessage::CouncilMessage(clsByteQueue* buffer) : ClientPacket(ClientPacketID_CouncilMessage /* 100 */) {
    buffer->ReadByte(); /* PacketID */
    Chat = buffer->ReadUnicodeString();

}

CouncilMessage::CouncilMessage(const std::string& Chat_) : ClientPacket(ClientPacketID_CouncilMessage /* 100 */), Chat(Chat_) {
}

void CouncilMessage::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_CouncilMessage); /* PacketID: 100 */
    buffer->WriteUnicodeString(Chat);

}

void CouncilMessage::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleCouncilMessage(this);
}

RoleMasterRequest::RoleMasterRequest() : ClientPacket(ClientPacketID_RoleMasterRequest /* 101 */), Request() {
}

RoleMasterRequest::RoleMasterRequest(clsByteQueue* buffer) : ClientPacket(ClientPacketID_RoleMasterRequest /* 101 */) {
    buffer->ReadByte(); /* PacketID */
    Request = buffer->ReadUnicodeString();

}

RoleMasterRequest::RoleMasterRequest(const std::string& Request_) : ClientPacket(ClientPacketID_RoleMasterRequest /* 101 */), Request(Request_) {
}

void RoleMasterRequest::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_RoleMasterRequest); /* PacketID: 101 */
    buffer->WriteUnicodeString(Request);

}

void RoleMasterRequest::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleRoleMasterRequest(this);
}

GMRequest::GMRequest() : ClientPacket(ClientPacketID_GMRequest /* 102 */) {
}

GMRequest::GMRequest(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GMRequest /* 102 */) {
    buffer->ReadByte(); /* PacketID */

}

void GMRequest::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GMRequest); /* PacketID: 102 */

}

void GMRequest::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGMRequest(this);
}

BugReport::BugReport() : ClientPacket(ClientPacketID_BugReport /* 103 */), Report() {
}

BugReport::BugReport(clsByteQueue* buffer) : ClientPacket(ClientPacketID_BugReport /* 103 */) {
    buffer->ReadByte(); /* PacketID */
    Report = buffer->ReadUnicodeString();

}

BugReport::BugReport(const std::string& Report_) : ClientPacket(ClientPacketID_BugReport /* 103 */), Report(Report_) {
}

void BugReport::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_BugReport); /* PacketID: 103 */
    buffer->WriteUnicodeString(Report);

}

void BugReport::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleBugReport(this);
}

ChangeDescription::ChangeDescription() : ClientPacket(ClientPacketID_ChangeDescription /* 104 */), Description() {
}

ChangeDescription::ChangeDescription(clsByteQueue* buffer) : ClientPacket(ClientPacketID_ChangeDescription /* 104 */) {
    buffer->ReadByte(); /* PacketID */
    Description = buffer->ReadUnicodeString();

}

ChangeDescription::ChangeDescription(const std::string& Description_) : ClientPacket(ClientPacketID_ChangeDescription /* 104 */), Description(Description_) {
}

void ChangeDescription::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_ChangeDescription); /* PacketID: 104 */
    buffer->WriteUnicodeString(Description);

}

void ChangeDescription::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleChangeDescription(this);
}

GuildVote::GuildVote() : ClientPacket(ClientPacketID_GuildVote /* 105 */), Vote() {
}

GuildVote::GuildVote(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildVote /* 105 */) {
    buffer->ReadByte(); /* PacketID */
    Vote = buffer->ReadUnicodeString();

}

GuildVote::GuildVote(const std::string& Vote_) : ClientPacket(ClientPacketID_GuildVote /* 105 */), Vote(Vote_) {
}

void GuildVote::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildVote); /* PacketID: 105 */
    buffer->WriteUnicodeString(Vote);

}

void GuildVote::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildVote(this);
}

Punishments::Punishments() : ClientPacket(ClientPacketID_Punishments /* 106 */), Name() {
}

Punishments::Punishments(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Punishments /* 106 */) {
    buffer->ReadByte(); /* PacketID */
    Name = buffer->ReadUnicodeString();

}

Punishments::Punishments(const std::string& Name_) : ClientPacket(ClientPacketID_Punishments /* 106 */), Name(Name_) {
}

void Punishments::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Punishments); /* PacketID: 106 */
    buffer->WriteUnicodeString(Name);

}

void Punishments::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handlePunishments(this);
}

ChangePassword::ChangePassword() : ClientPacket(ClientPacketID_ChangePassword /* 107 */), OldPass(), NewPass() {
}

ChangePassword::ChangePassword(clsByteQueue* buffer) : ClientPacket(ClientPacketID_ChangePassword /* 107 */) {
    buffer->ReadByte(); /* PacketID */
    OldPass = buffer->ReadUnicodeString();
    NewPass = buffer->ReadUnicodeString();

}

ChangePassword::ChangePassword(const std::string& OldPass_, const std::string& NewPass_) : ClientPacket(ClientPacketID_ChangePassword /* 107 */), OldPass(OldPass_), NewPass(NewPass_) {
}

void ChangePassword::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_ChangePassword); /* PacketID: 107 */
    buffer->WriteUnicodeString(OldPass);
    buffer->WriteUnicodeString(NewPass);

}

void ChangePassword::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleChangePassword(this);
}

Gamble::Gamble() : ClientPacket(ClientPacketID_Gamble /* 108 */), Amount() {
}

Gamble::Gamble(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Gamble /* 108 */) {
    buffer->ReadByte(); /* PacketID */
    Amount = buffer->ReadInteger();

}

Gamble::Gamble(std::int16_t Amount_) : ClientPacket(ClientPacketID_Gamble /* 108 */), Amount(Amount_) {
}

void Gamble::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Gamble); /* PacketID: 108 */
    buffer->WriteInteger(Amount);

}

void Gamble::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGamble(this);
}

InquiryVote::InquiryVote() : ClientPacket(ClientPacketID_InquiryVote /* 109 */), Opt() {
}

InquiryVote::InquiryVote(clsByteQueue* buffer) : ClientPacket(ClientPacketID_InquiryVote /* 109 */) {
    buffer->ReadByte(); /* PacketID */
    Opt = buffer->ReadByte();

}

InquiryVote::InquiryVote(std::uint8_t Opt_) : ClientPacket(ClientPacketID_InquiryVote /* 109 */), Opt(Opt_) {
}

void InquiryVote::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_InquiryVote); /* PacketID: 109 */
    buffer->WriteByte(Opt);

}

void InquiryVote::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleInquiryVote(this);
}

LeaveFaction::LeaveFaction() : ClientPacket(ClientPacketID_LeaveFaction /* 110 */) {
}

LeaveFaction::LeaveFaction(clsByteQueue* buffer) : ClientPacket(ClientPacketID_LeaveFaction /* 110 */) {
    buffer->ReadByte(); /* PacketID */

}

void LeaveFaction::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_LeaveFaction); /* PacketID: 110 */

}

void LeaveFaction::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleLeaveFaction(this);
}

BankExtractGold::BankExtractGold() : ClientPacket(ClientPacketID_BankExtractGold /* 111 */), Amount() {
}

BankExtractGold::BankExtractGold(clsByteQueue* buffer) : ClientPacket(ClientPacketID_BankExtractGold /* 111 */) {
    buffer->ReadByte(); /* PacketID */
    Amount = buffer->ReadLong();

}

BankExtractGold::BankExtractGold(std::int32_t Amount_) : ClientPacket(ClientPacketID_BankExtractGold /* 111 */), Amount(Amount_) {
}

void BankExtractGold::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_BankExtractGold); /* PacketID: 111 */
    buffer->WriteLong(Amount);

}

void BankExtractGold::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleBankExtractGold(this);
}

BankDepositGold::BankDepositGold() : ClientPacket(ClientPacketID_BankDepositGold /* 112 */), Amount() {
}

BankDepositGold::BankDepositGold(clsByteQueue* buffer) : ClientPacket(ClientPacketID_BankDepositGold /* 112 */) {
    buffer->ReadByte(); /* PacketID */
    Amount = buffer->ReadLong();

}

BankDepositGold::BankDepositGold(std::int32_t Amount_) : ClientPacket(ClientPacketID_BankDepositGold /* 112 */), Amount(Amount_) {
}

void BankDepositGold::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_BankDepositGold); /* PacketID: 112 */
    buffer->WriteLong(Amount);

}

void BankDepositGold::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleBankDepositGold(this);
}

Denounce::Denounce() : ClientPacket(ClientPacketID_Denounce /* 113 */), Text() {
}

Denounce::Denounce(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Denounce /* 113 */) {
    buffer->ReadByte(); /* PacketID */
    Text = buffer->ReadUnicodeString();

}

Denounce::Denounce(const std::string& Text_) : ClientPacket(ClientPacketID_Denounce /* 113 */), Text(Text_) {
}

void Denounce::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Denounce); /* PacketID: 113 */
    buffer->WriteUnicodeString(Text);

}

void Denounce::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleDenounce(this);
}

GuildFundate::GuildFundate() : ClientPacket(ClientPacketID_GuildFundate /* 114 */) {
}

GuildFundate::GuildFundate(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildFundate /* 114 */) {
    buffer->ReadByte(); /* PacketID */

}

void GuildFundate::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildFundate); /* PacketID: 114 */

}

void GuildFundate::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildFundate(this);
}

GuildFundation::GuildFundation() : ClientPacket(ClientPacketID_GuildFundation /* 115 */), ClanType() {
}

GuildFundation::GuildFundation(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GuildFundation /* 115 */) {
    buffer->ReadByte(); /* PacketID */
    ClanType = buffer->ReadByte();

}

GuildFundation::GuildFundation(std::uint8_t ClanType_) : ClientPacket(ClientPacketID_GuildFundation /* 115 */), ClanType(ClanType_) {
}

void GuildFundation::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_GuildFundation); /* PacketID: 115 */
    buffer->WriteByte(ClanType);

}

void GuildFundation::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGuildFundation(this);
}

PartyKick::PartyKick() : ClientPacket(ClientPacketID_PartyKick /* 116 */), UserName() {
}

PartyKick::PartyKick(clsByteQueue* buffer) : ClientPacket(ClientPacketID_PartyKick /* 116 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

PartyKick::PartyKick(const std::string& UserName_) : ClientPacket(ClientPacketID_PartyKick /* 116 */), UserName(UserName_) {
}

void PartyKick::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_PartyKick); /* PacketID: 116 */
    buffer->WriteUnicodeString(UserName);

}

void PartyKick::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handlePartyKick(this);
}

PartySetLeader::PartySetLeader() : ClientPacket(ClientPacketID_PartySetLeader /* 117 */), UserName() {
}

PartySetLeader::PartySetLeader(clsByteQueue* buffer) : ClientPacket(ClientPacketID_PartySetLeader /* 117 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

PartySetLeader::PartySetLeader(const std::string& UserName_) : ClientPacket(ClientPacketID_PartySetLeader /* 117 */), UserName(UserName_) {
}

void PartySetLeader::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_PartySetLeader); /* PacketID: 117 */
    buffer->WriteUnicodeString(UserName);

}

void PartySetLeader::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handlePartySetLeader(this);
}

PartyAcceptMember::PartyAcceptMember() : ClientPacket(ClientPacketID_PartyAcceptMember /* 118 */), UserName() {
}

PartyAcceptMember::PartyAcceptMember(clsByteQueue* buffer) : ClientPacket(ClientPacketID_PartyAcceptMember /* 118 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

PartyAcceptMember::PartyAcceptMember(const std::string& UserName_) : ClientPacket(ClientPacketID_PartyAcceptMember /* 118 */), UserName(UserName_) {
}

void PartyAcceptMember::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_PartyAcceptMember); /* PacketID: 118 */
    buffer->WriteUnicodeString(UserName);

}

void PartyAcceptMember::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handlePartyAcceptMember(this);
}

Ping::Ping() : ClientPacket(ClientPacketID_Ping /* 119 */) {
}

Ping::Ping(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Ping /* 119 */) {
    buffer->ReadByte(); /* PacketID */

}

void Ping::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Ping); /* PacketID: 119 */

}

void Ping::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handlePing(this);
}

RequestPartyForm::RequestPartyForm() : ClientPacket(ClientPacketID_RequestPartyForm /* 120 */) {
}

RequestPartyForm::RequestPartyForm(clsByteQueue* buffer) : ClientPacket(ClientPacketID_RequestPartyForm /* 120 */) {
    buffer->ReadByte(); /* PacketID */

}

void RequestPartyForm::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_RequestPartyForm); /* PacketID: 120 */

}

void RequestPartyForm::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleRequestPartyForm(this);
}

ItemUpgrade::ItemUpgrade() : ClientPacket(ClientPacketID_ItemUpgrade /* 121 */), ItemIndex() {
}

ItemUpgrade::ItemUpgrade(clsByteQueue* buffer) : ClientPacket(ClientPacketID_ItemUpgrade /* 121 */) {
    buffer->ReadByte(); /* PacketID */
    ItemIndex = buffer->ReadInteger();

}

ItemUpgrade::ItemUpgrade(std::int16_t ItemIndex_) : ClientPacket(ClientPacketID_ItemUpgrade /* 121 */), ItemIndex(ItemIndex_) {
}

void ItemUpgrade::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_ItemUpgrade); /* PacketID: 121 */
    buffer->WriteInteger(ItemIndex);

}

void ItemUpgrade::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleItemUpgrade(this);
}

GMCommands::GMCommands() : ClientPacket(ClientPacketID_GMCommands /* 122 */) {
}

GMCommands::GMCommands(clsByteQueue* buffer) : ClientPacket(ClientPacketID_GMCommands /* 122 */) {
    buffer->ReadByte(); /* PacketID */
    composite.reset(dakara::protocol::clientgm::ClientGMPacketFactory(buffer));
/*  */
}

GMCommands::~GMCommands() {}

void GMCommands::serialize(clsByteQueue* buffer) const {
    composite->serialize(buffer);
/*  */
}

void GMCommands::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleGMCommands(this);
}

InitCrafting::InitCrafting() : ClientPacket(ClientPacketID_InitCrafting /* 123 */), TotalItems(), ItemsPorCiclo() {
}

InitCrafting::InitCrafting(clsByteQueue* buffer) : ClientPacket(ClientPacketID_InitCrafting /* 123 */) {
    buffer->ReadByte(); /* PacketID */
    TotalItems = buffer->ReadLong();
    ItemsPorCiclo = buffer->ReadInteger();

}

InitCrafting::InitCrafting(std::int32_t TotalItems_, std::int16_t ItemsPorCiclo_) : ClientPacket(ClientPacketID_InitCrafting /* 123 */), TotalItems(TotalItems_), ItemsPorCiclo(ItemsPorCiclo_) {
}

void InitCrafting::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_InitCrafting); /* PacketID: 123 */
    buffer->WriteLong(TotalItems);
    buffer->WriteInteger(ItemsPorCiclo);

}

void InitCrafting::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleInitCrafting(this);
}

Home::Home() : ClientPacket(ClientPacketID_Home /* 124 */) {
}

Home::Home(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Home /* 124 */) {
    buffer->ReadByte(); /* PacketID */

}

void Home::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Home); /* PacketID: 124 */

}

void Home::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleHome(this);
}

ShowGuildNews::ShowGuildNews() : ClientPacket(ClientPacketID_ShowGuildNews /* 125 */) {
}

ShowGuildNews::ShowGuildNews(clsByteQueue* buffer) : ClientPacket(ClientPacketID_ShowGuildNews /* 125 */) {
    buffer->ReadByte(); /* PacketID */

}

void ShowGuildNews::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_ShowGuildNews); /* PacketID: 125 */

}

void ShowGuildNews::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleShowGuildNews(this);
}

ShareNpc::ShareNpc() : ClientPacket(ClientPacketID_ShareNpc /* 126 */) {
}

ShareNpc::ShareNpc(clsByteQueue* buffer) : ClientPacket(ClientPacketID_ShareNpc /* 126 */) {
    buffer->ReadByte(); /* PacketID */

}

void ShareNpc::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_ShareNpc); /* PacketID: 126 */

}

void ShareNpc::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleShareNpc(this);
}

StopSharingNpc::StopSharingNpc() : ClientPacket(ClientPacketID_StopSharingNpc /* 127 */) {
}

StopSharingNpc::StopSharingNpc(clsByteQueue* buffer) : ClientPacket(ClientPacketID_StopSharingNpc /* 127 */) {
    buffer->ReadByte(); /* PacketID */

}

void StopSharingNpc::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_StopSharingNpc); /* PacketID: 127 */

}

void StopSharingNpc::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleStopSharingNpc(this);
}

Consultation::Consultation() : ClientPacket(ClientPacketID_Consultation /* 128 */) {
}

Consultation::Consultation(clsByteQueue* buffer) : ClientPacket(ClientPacketID_Consultation /* 128 */) {
    buffer->ReadByte(); /* PacketID */

}

void Consultation::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_Consultation); /* PacketID: 128 */

}

void Consultation::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleConsultation(this);
}

MoveItem::MoveItem() : ClientPacket(ClientPacketID_MoveItem /* 129 */), OldSlot(), NewSlot() {
}

MoveItem::MoveItem(clsByteQueue* buffer) : ClientPacket(ClientPacketID_MoveItem /* 129 */) {
    buffer->ReadByte(); /* PacketID */
    OldSlot = buffer->ReadByte();
    NewSlot = buffer->ReadByte();

}

MoveItem::MoveItem(std::uint8_t OldSlot_, std::uint8_t NewSlot_) : ClientPacket(ClientPacketID_MoveItem /* 129 */), OldSlot(OldSlot_), NewSlot(NewSlot_) {
}

void MoveItem::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ClientPacketID_MoveItem); /* PacketID: 129 */
    buffer->WriteByte(OldSlot);
    buffer->WriteByte(NewSlot);

}

void MoveItem::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientPacket()->handleMoveItem(this);
}

ClientPacketHandler::~ClientPacketHandler() {}

void ClientPacketHandler::handleLoginExistingChar(LoginExistingChar* p){ (void)p; }
void ClientPacketHandler::handleThrowDices(ThrowDices* p){ (void)p; }
void ClientPacketHandler::handleLoginNewChar(LoginNewChar* p){ (void)p; }
void ClientPacketHandler::handleTalk(Talk* p){ (void)p; }
void ClientPacketHandler::handleYell(Yell* p){ (void)p; }
void ClientPacketHandler::handleWhisper(Whisper* p){ (void)p; }
void ClientPacketHandler::handleWalk(Walk* p){ (void)p; }
void ClientPacketHandler::handleRequestPositionUpdate(RequestPositionUpdate* p){ (void)p; }
void ClientPacketHandler::handleAttack(Attack* p){ (void)p; }
void ClientPacketHandler::handlePickUp(PickUp* p){ (void)p; }
void ClientPacketHandler::handleSafeToggle(SafeToggle* p){ (void)p; }
void ClientPacketHandler::handleResuscitationSafeToggle(ResuscitationSafeToggle* p){ (void)p; }
void ClientPacketHandler::handleRequestGuildLeaderInfo(RequestGuildLeaderInfo* p){ (void)p; }
void ClientPacketHandler::handleRequestAtributes(RequestAtributes* p){ (void)p; }
void ClientPacketHandler::handleRequestFame(RequestFame* p){ (void)p; }
void ClientPacketHandler::handleRequestSkills(RequestSkills* p){ (void)p; }
void ClientPacketHandler::handleRequestMiniStats(RequestMiniStats* p){ (void)p; }
void ClientPacketHandler::handleCommerceEnd(CommerceEnd* p){ (void)p; }
void ClientPacketHandler::handleUserCommerceEnd(UserCommerceEnd* p){ (void)p; }
void ClientPacketHandler::handleUserCommerceConfirm(UserCommerceConfirm* p){ (void)p; }
void ClientPacketHandler::handleCommerceChat(CommerceChat* p){ (void)p; }
void ClientPacketHandler::handleBankEnd(BankEnd* p){ (void)p; }
void ClientPacketHandler::handleUserCommerceOk(UserCommerceOk* p){ (void)p; }
void ClientPacketHandler::handleUserCommerceReject(UserCommerceReject* p){ (void)p; }
void ClientPacketHandler::handleDrop(Drop* p){ (void)p; }
void ClientPacketHandler::handleCastSpell(CastSpell* p){ (void)p; }
void ClientPacketHandler::handleLeftClick(LeftClick* p){ (void)p; }
void ClientPacketHandler::handleDoubleClick(DoubleClick* p){ (void)p; }
void ClientPacketHandler::handleWork(Work* p){ (void)p; }
void ClientPacketHandler::handleUseSpellMacro(UseSpellMacro* p){ (void)p; }
void ClientPacketHandler::handleUseItem(UseItem* p){ (void)p; }
void ClientPacketHandler::handleCraftBlacksmith(CraftBlacksmith* p){ (void)p; }
void ClientPacketHandler::handleCraftCarpenter(CraftCarpenter* p){ (void)p; }
void ClientPacketHandler::handleWorkLeftClick(WorkLeftClick* p){ (void)p; }
void ClientPacketHandler::handleCreateNewGuild(CreateNewGuild* p){ (void)p; }
void ClientPacketHandler::handleSpellInfo(SpellInfo* p){ (void)p; }
void ClientPacketHandler::handleEquipItem(EquipItem* p){ (void)p; }
void ClientPacketHandler::handleChangeHeading(ChangeHeading* p){ (void)p; }
void ClientPacketHandler::handleModifySkills(ModifySkills* p){ (void)p; }
void ClientPacketHandler::handleTrain(Train* p){ (void)p; }
void ClientPacketHandler::handleCommerceBuy(CommerceBuy* p){ (void)p; }
void ClientPacketHandler::handleBankExtractItem(BankExtractItem* p){ (void)p; }
void ClientPacketHandler::handleCommerceSell(CommerceSell* p){ (void)p; }
void ClientPacketHandler::handleBankDeposit(BankDeposit* p){ (void)p; }
void ClientPacketHandler::handleForumPost(ForumPost* p){ (void)p; }
void ClientPacketHandler::handleMoveSpell(MoveSpell* p){ (void)p; }
void ClientPacketHandler::handleMoveBank(MoveBank* p){ (void)p; }
void ClientPacketHandler::handleClanCodexUpdate(ClanCodexUpdate* p){ (void)p; }
void ClientPacketHandler::handleUserCommerceOffer(UserCommerceOffer* p){ (void)p; }
void ClientPacketHandler::handleGuildAcceptPeace(GuildAcceptPeace* p){ (void)p; }
void ClientPacketHandler::handleGuildRejectAlliance(GuildRejectAlliance* p){ (void)p; }
void ClientPacketHandler::handleGuildRejectPeace(GuildRejectPeace* p){ (void)p; }
void ClientPacketHandler::handleGuildAcceptAlliance(GuildAcceptAlliance* p){ (void)p; }
void ClientPacketHandler::handleGuildOfferPeace(GuildOfferPeace* p){ (void)p; }
void ClientPacketHandler::handleGuildOfferAlliance(GuildOfferAlliance* p){ (void)p; }
void ClientPacketHandler::handleGuildAllianceDetails(GuildAllianceDetails* p){ (void)p; }
void ClientPacketHandler::handleGuildPeaceDetails(GuildPeaceDetails* p){ (void)p; }
void ClientPacketHandler::handleGuildRequestJoinerInfo(GuildRequestJoinerInfo* p){ (void)p; }
void ClientPacketHandler::handleGuildAlliancePropList(GuildAlliancePropList* p){ (void)p; }
void ClientPacketHandler::handleGuildPeacePropList(GuildPeacePropList* p){ (void)p; }
void ClientPacketHandler::handleGuildDeclareWar(GuildDeclareWar* p){ (void)p; }
void ClientPacketHandler::handleGuildNewWebsite(GuildNewWebsite* p){ (void)p; }
void ClientPacketHandler::handleGuildAcceptNewMember(GuildAcceptNewMember* p){ (void)p; }
void ClientPacketHandler::handleGuildRejectNewMember(GuildRejectNewMember* p){ (void)p; }
void ClientPacketHandler::handleGuildKickMember(GuildKickMember* p){ (void)p; }
void ClientPacketHandler::handleGuildUpdateNews(GuildUpdateNews* p){ (void)p; }
void ClientPacketHandler::handleGuildMemberInfo(GuildMemberInfo* p){ (void)p; }
void ClientPacketHandler::handleGuildOpenElections(GuildOpenElections* p){ (void)p; }
void ClientPacketHandler::handleGuildRequestMembership(GuildRequestMembership* p){ (void)p; }
void ClientPacketHandler::handleGuildRequestDetails(GuildRequestDetails* p){ (void)p; }
void ClientPacketHandler::handleOnline(Online* p){ (void)p; }
void ClientPacketHandler::handleQuit(Quit* p){ (void)p; }
void ClientPacketHandler::handleGuildLeave(GuildLeave* p){ (void)p; }
void ClientPacketHandler::handleRequestAccountState(RequestAccountState* p){ (void)p; }
void ClientPacketHandler::handlePetStand(PetStand* p){ (void)p; }
void ClientPacketHandler::handlePetFollow(PetFollow* p){ (void)p; }
void ClientPacketHandler::handleReleasePet(ReleasePet* p){ (void)p; }
void ClientPacketHandler::handleTrainList(TrainList* p){ (void)p; }
void ClientPacketHandler::handleRest(Rest* p){ (void)p; }
void ClientPacketHandler::handleMeditate(Meditate* p){ (void)p; }
void ClientPacketHandler::handleResucitate(Resucitate* p){ (void)p; }
void ClientPacketHandler::handleHeal(Heal* p){ (void)p; }
void ClientPacketHandler::handleHelp(Help* p){ (void)p; }
void ClientPacketHandler::handleRequestStats(RequestStats* p){ (void)p; }
void ClientPacketHandler::handleCommerceStart(CommerceStart* p){ (void)p; }
void ClientPacketHandler::handleBankStart(BankStart* p){ (void)p; }
void ClientPacketHandler::handleEnlist(Enlist* p){ (void)p; }
void ClientPacketHandler::handleInformation(Information* p){ (void)p; }
void ClientPacketHandler::handleReward(Reward* p){ (void)p; }
void ClientPacketHandler::handleRequestMOTD(RequestMOTD* p){ (void)p; }
void ClientPacketHandler::handleUpTime(UpTime* p){ (void)p; }
void ClientPacketHandler::handlePartyLeave(PartyLeave* p){ (void)p; }
void ClientPacketHandler::handlePartyCreate(PartyCreate* p){ (void)p; }
void ClientPacketHandler::handlePartyJoin(PartyJoin* p){ (void)p; }
void ClientPacketHandler::handleInquiry(Inquiry* p){ (void)p; }
void ClientPacketHandler::handleGuildMessage(GuildMessage* p){ (void)p; }
void ClientPacketHandler::handlePartyMessage(PartyMessage* p){ (void)p; }
void ClientPacketHandler::handleCentinelReport(CentinelReport* p){ (void)p; }
void ClientPacketHandler::handleGuildOnline(GuildOnline* p){ (void)p; }
void ClientPacketHandler::handlePartyOnline(PartyOnline* p){ (void)p; }
void ClientPacketHandler::handleCouncilMessage(CouncilMessage* p){ (void)p; }
void ClientPacketHandler::handleRoleMasterRequest(RoleMasterRequest* p){ (void)p; }
void ClientPacketHandler::handleGMRequest(GMRequest* p){ (void)p; }
void ClientPacketHandler::handleBugReport(BugReport* p){ (void)p; }
void ClientPacketHandler::handleChangeDescription(ChangeDescription* p){ (void)p; }
void ClientPacketHandler::handleGuildVote(GuildVote* p){ (void)p; }
void ClientPacketHandler::handlePunishments(Punishments* p){ (void)p; }
void ClientPacketHandler::handleChangePassword(ChangePassword* p){ (void)p; }
void ClientPacketHandler::handleGamble(Gamble* p){ (void)p; }
void ClientPacketHandler::handleInquiryVote(InquiryVote* p){ (void)p; }
void ClientPacketHandler::handleLeaveFaction(LeaveFaction* p){ (void)p; }
void ClientPacketHandler::handleBankExtractGold(BankExtractGold* p){ (void)p; }
void ClientPacketHandler::handleBankDepositGold(BankDepositGold* p){ (void)p; }
void ClientPacketHandler::handleDenounce(Denounce* p){ (void)p; }
void ClientPacketHandler::handleGuildFundate(GuildFundate* p){ (void)p; }
void ClientPacketHandler::handleGuildFundation(GuildFundation* p){ (void)p; }
void ClientPacketHandler::handlePartyKick(PartyKick* p){ (void)p; }
void ClientPacketHandler::handlePartySetLeader(PartySetLeader* p){ (void)p; }
void ClientPacketHandler::handlePartyAcceptMember(PartyAcceptMember* p){ (void)p; }
void ClientPacketHandler::handlePing(Ping* p){ (void)p; }
void ClientPacketHandler::handleRequestPartyForm(RequestPartyForm* p){ (void)p; }
void ClientPacketHandler::handleItemUpgrade(ItemUpgrade* p){ (void)p; }
void ClientPacketHandler::handleGMCommands(GMCommands* p){ (void)p; }
void ClientPacketHandler::handleInitCrafting(InitCrafting* p){ (void)p; }
void ClientPacketHandler::handleHome(Home* p){ (void)p; }
void ClientPacketHandler::handleShowGuildNews(ShowGuildNews* p){ (void)p; }
void ClientPacketHandler::handleShareNpc(ShareNpc* p){ (void)p; }
void ClientPacketHandler::handleStopSharingNpc(StopSharingNpc* p){ (void)p; }
void ClientPacketHandler::handleConsultation(Consultation* p){ (void)p; }
void ClientPacketHandler::handleMoveItem(MoveItem* p){ (void)p; }

}

namespace clientgm {

ClientGMPacket* ClientGMPacketFactory(clsByteQueue* buffer) {
    if (buffer->length() < 1) return 0;
    ClientGMPacket *p = 0;
    int PacketID = buffer->PeekByte();

    switch (PacketID) {

        case 1:
            p = new GMMessage(buffer);
            break;

        case 2:
            p = new ShowName(buffer);
            break;

        case 3:
            p = new OnlineRoyalArmy(buffer);
            break;

        case 4:
            p = new OnlineChaosLegion(buffer);
            break;

        case 5:
            p = new GoNearby(buffer);
            break;

        case 6:
            p = new Comment(buffer);
            break;

        case 7:
            p = new ServerTime(buffer);
            break;

        case 8:
            p = new Where(buffer);
            break;

        case 9:
            p = new CreaturesInMap(buffer);
            break;

        case 10:
            p = new WarpMeToTarget(buffer);
            break;

        case 11:
            p = new WarpChar(buffer);
            break;

        case 12:
            p = new Silence(buffer);
            break;

        case 13:
            p = new SOSShowList(buffer);
            break;

        case 14:
            p = new SOSRemove(buffer);
            break;

        case 15:
            p = new GoToChar(buffer);
            break;

        case 16:
            p = new Invisible(buffer);
            break;

        case 17:
            p = new GMPanel(buffer);
            break;

        case 18:
            p = new RequestUserList(buffer);
            break;

        case 19:
            p = new Working(buffer);
            break;

        case 20:
            p = new Hiding(buffer);
            break;

        case 21:
            p = new Jail(buffer);
            break;

        case 22:
            p = new KillNPC(buffer);
            break;

        case 23:
            p = new WarnUser(buffer);
            break;

        case 24:
            p = new EditChar(buffer);
            break;

        case 25:
            p = new RequestCharInfo(buffer);
            break;

        case 26:
            p = new RequestCharStats(buffer);
            break;

        case 27:
            p = new RequestCharGold(buffer);
            break;

        case 28:
            p = new RequestCharInventory(buffer);
            break;

        case 29:
            p = new RequestCharBank(buffer);
            break;

        case 30:
            p = new RequestCharSkills(buffer);
            break;

        case 31:
            p = new ReviveChar(buffer);
            break;

        case 32:
            p = new OnlineGM(buffer);
            break;

        case 33:
            p = new OnlineMap(buffer);
            break;

        case 34:
            p = new Forgive(buffer);
            break;

        case 35:
            p = new Kick(buffer);
            break;

        case 36:
            p = new Execute(buffer);
            break;

        case 37:
            p = new BanChar(buffer);
            break;

        case 38:
            p = new UnbanChar(buffer);
            break;

        case 39:
            p = new NPCFollow(buffer);
            break;

        case 40:
            p = new SummonChar(buffer);
            break;

        case 41:
            p = new SpawnListRequest(buffer);
            break;

        case 42:
            p = new SpawnCreature(buffer);
            break;

        case 43:
            p = new ResetNPCInventory(buffer);
            break;

        case 44:
            p = new CleanWorld(buffer);
            break;

        case 45:
            p = new ServerMessage(buffer);
            break;

        case 46:
            p = new NickToIP(buffer);
            break;

        case 47:
            p = new IPToNick(buffer);
            break;

        case 48:
            p = new GuildOnlineMembers(buffer);
            break;

        case 49:
            p = new TeleportCreate(buffer);
            break;

        case 50:
            p = new TeleportDestroy(buffer);
            break;

        case 51:
            p = new RainToggle(buffer);
            break;

        case 52:
            p = new SetCharDescription(buffer);
            break;

        case 53:
            p = new ForceMIDIToMap(buffer);
            break;

        case 54:
            p = new ForceWAVEToMap(buffer);
            break;

        case 55:
            p = new RoyalArmyMessage(buffer);
            break;

        case 56:
            p = new ChaosLegionMessage(buffer);
            break;

        case 57:
            p = new CitizenMessage(buffer);
            break;

        case 58:
            p = new CriminalMessage(buffer);
            break;

        case 59:
            p = new TalkAsNPC(buffer);
            break;

        case 60:
            p = new DestroyAllItemsInArea(buffer);
            break;

        case 61:
            p = new AcceptRoyalCouncilMember(buffer);
            break;

        case 62:
            p = new AcceptChaosCouncilMember(buffer);
            break;

        case 63:
            p = new ItemsInTheFloor(buffer);
            break;

        case 64:
            p = new MakeDumb(buffer);
            break;

        case 65:
            p = new MakeDumbNoMore(buffer);
            break;

        case 66:
            p = new DumpIPTables(buffer);
            break;

        case 67:
            p = new CouncilKick(buffer);
            break;

        case 68:
            p = new SetTrigger(buffer);
            break;

        case 69:
            p = new AskTrigger(buffer);
            break;

        case 70:
            p = new BannedIPList(buffer);
            break;

        case 71:
            p = new BannedIPReload(buffer);
            break;

        case 72:
            p = new GuildMemberList(buffer);
            break;

        case 73:
            p = new GuildBan(buffer);
            break;

        case 74:
            p = new BanIP(buffer);
            break;

        case 75:
            p = new UnbanIP(buffer);
            break;

        case 76:
            p = new CreateItem(buffer);
            break;

        case 77:
            p = new DestroyItems(buffer);
            break;

        case 78:
            p = new ChaosLegionKick(buffer);
            break;

        case 79:
            p = new RoyalArmyKick(buffer);
            break;

        case 80:
            p = new ForceMIDIAll(buffer);
            break;

        case 81:
            p = new ForceWAVEAll(buffer);
            break;

        case 82:
            p = new RemovePunishment(buffer);
            break;

        case 83:
            p = new TileBlockedToggle(buffer);
            break;

        case 84:
            p = new KillNPCNoRespawn(buffer);
            break;

        case 85:
            p = new KillAllNearbyNPCs(buffer);
            break;

        case 86:
            p = new LastIP(buffer);
            break;

        case 87:
            p = new ChangeMOTD(buffer);
            break;

        case 88:
            p = new SetMOTD(buffer);
            break;

        case 89:
            p = new SystemMessage(buffer);
            break;

        case 90:
            p = new CreateNPC(buffer);
            break;

        case 91:
            p = new CreateNPCWithRespawn(buffer);
            break;

        case 92:
            p = new ImperialArmour(buffer);
            break;

        case 93:
            p = new ChaosArmour(buffer);
            break;

        case 94:
            p = new NavigateToggle(buffer);
            break;

        case 95:
            p = new ServerOpenToUsersToggle(buffer);
            break;

        case 96:
            p = new TurnOffServer(buffer);
            break;

        case 97:
            p = new TurnCriminal(buffer);
            break;

        case 98:
            p = new ResetFactions(buffer);
            break;

        case 99:
            p = new RemoveCharFromGuild(buffer);
            break;

        case 100:
            p = new RequestCharMail(buffer);
            break;

        case 101:
            p = new AlterPassword(buffer);
            break;

        case 102:
            p = new AlterMail(buffer);
            break;

        case 103:
            p = new AlterName(buffer);
            break;

        case 104:
            p = new ToggleCentinelActivated(buffer);
            break;

        case 105:
            p = new DoBackUp(buffer);
            break;

        case 106:
            p = new ShowGuildMessages(buffer);
            break;

        case 107:
            p = new SaveMap(buffer);
            break;

        case 108:
            p = new ChangeMapInfoPK(buffer);
            break;

        case 109:
            p = new ChangeMapInfoBackup(buffer);
            break;

        case 110:
            p = new ChangeMapInfoRestricted(buffer);
            break;

        case 111:
            p = new ChangeMapInfoNoMagic(buffer);
            break;

        case 112:
            p = new ChangeMapInfoNoInvi(buffer);
            break;

        case 113:
            p = new ChangeMapInfoNoResu(buffer);
            break;

        case 114:
            p = new ChangeMapInfoLand(buffer);
            break;

        case 115:
            p = new ChangeMapInfoZone(buffer);
            break;

        case 116:
            p = new ChangeMapInfoStealNpc(buffer);
            break;

        case 117:
            p = new ChangeMapInfoNoOcultar(buffer);
            break;

        case 118:
            p = new ChangeMapInfoNoInvocar(buffer);
            break;

        case 119:
            p = new SaveChars(buffer);
            break;

        case 120:
            p = new CleanSOS(buffer);
            break;

        case 121:
            p = new ShowServerForm(buffer);
            break;

        case 122:
            p = new Night(buffer);
            break;

        case 123:
            p = new KickAllChars(buffer);
            break;

        case 124:
            p = new ReloadNPCs(buffer);
            break;

        case 125:
            p = new ReloadServerIni(buffer);
            break;

        case 126:
            p = new ReloadSpells(buffer);
            break;

        case 127:
            p = new ReloadObjects(buffer);
            break;

        case 128:
            p = new Restart(buffer);
            break;

        case 129:
            p = new ResetAutoUpdate(buffer);
            break;

        case 130:
            p = new ChatColor(buffer);
            break;

        case 131:
            p = new Ignored(buffer);
            break;

        case 132:
            p = new CheckSlot(buffer);
            break;

        case 133:
            p = new SetIniVar(buffer);
            break;

        case 134:
            p = new CreatePretorianClan(buffer);
            break;

        case 135:
            p = new RemovePretorianClan(buffer);
            break;

        case 136:
            p = new EnableDenounces(buffer);
            break;

        case 137:
            p = new ShowDenouncesList(buffer);
            break;

        case 138:
            p = new MapMessage(buffer);
            break;

        case 139:
            p = new SetDialog(buffer);
            break;

        case 140:
            p = new Impersonate(buffer);
            break;

        case 141:
            p = new Imitate(buffer);
            break;

        case 142:
            p = new RecordAdd(buffer);
            break;

        case 143:
            p = new RecordRemove(buffer);
            break;

        case 144:
            p = new RecordAddObs(buffer);
            break;

        case 145:
            p = new RecordListRequest(buffer);
            break;

        case 146:
            p = new RecordDetailsRequest(buffer);
            break;

        case 147:
            p = new AlterGuildName(buffer);
            break;

        case 148:
            p = new HigherAdminsMessage(buffer);
            break;

    }
    return p;
}

void ClientGMPacketDecodeAndDispatch(clsByteQueue* buffer, PacketHandler* handler) {
    if (buffer->length() < 1) return;
    int PacketID = buffer->PeekByte();

    switch (PacketID) {

        case 1:
        {
            GMMessage p(buffer);
            p.dispatch(handler);
            break;
        }

        case 2:
        {
            ShowName p(buffer);
            p.dispatch(handler);
            break;
        }

        case 3:
        {
            OnlineRoyalArmy p(buffer);
            p.dispatch(handler);
            break;
        }

        case 4:
        {
            OnlineChaosLegion p(buffer);
            p.dispatch(handler);
            break;
        }

        case 5:
        {
            GoNearby p(buffer);
            p.dispatch(handler);
            break;
        }

        case 6:
        {
            Comment p(buffer);
            p.dispatch(handler);
            break;
        }

        case 7:
        {
            ServerTime p(buffer);
            p.dispatch(handler);
            break;
        }

        case 8:
        {
            Where p(buffer);
            p.dispatch(handler);
            break;
        }

        case 9:
        {
            CreaturesInMap p(buffer);
            p.dispatch(handler);
            break;
        }

        case 10:
        {
            WarpMeToTarget p(buffer);
            p.dispatch(handler);
            break;
        }

        case 11:
        {
            WarpChar p(buffer);
            p.dispatch(handler);
            break;
        }

        case 12:
        {
            Silence p(buffer);
            p.dispatch(handler);
            break;
        }

        case 13:
        {
            SOSShowList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 14:
        {
            SOSRemove p(buffer);
            p.dispatch(handler);
            break;
        }

        case 15:
        {
            GoToChar p(buffer);
            p.dispatch(handler);
            break;
        }

        case 16:
        {
            Invisible p(buffer);
            p.dispatch(handler);
            break;
        }

        case 17:
        {
            GMPanel p(buffer);
            p.dispatch(handler);
            break;
        }

        case 18:
        {
            RequestUserList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 19:
        {
            Working p(buffer);
            p.dispatch(handler);
            break;
        }

        case 20:
        {
            Hiding p(buffer);
            p.dispatch(handler);
            break;
        }

        case 21:
        {
            Jail p(buffer);
            p.dispatch(handler);
            break;
        }

        case 22:
        {
            KillNPC p(buffer);
            p.dispatch(handler);
            break;
        }

        case 23:
        {
            WarnUser p(buffer);
            p.dispatch(handler);
            break;
        }

        case 24:
        {
            EditChar p(buffer);
            p.dispatch(handler);
            break;
        }

        case 25:
        {
            RequestCharInfo p(buffer);
            p.dispatch(handler);
            break;
        }

        case 26:
        {
            RequestCharStats p(buffer);
            p.dispatch(handler);
            break;
        }

        case 27:
        {
            RequestCharGold p(buffer);
            p.dispatch(handler);
            break;
        }

        case 28:
        {
            RequestCharInventory p(buffer);
            p.dispatch(handler);
            break;
        }

        case 29:
        {
            RequestCharBank p(buffer);
            p.dispatch(handler);
            break;
        }

        case 30:
        {
            RequestCharSkills p(buffer);
            p.dispatch(handler);
            break;
        }

        case 31:
        {
            ReviveChar p(buffer);
            p.dispatch(handler);
            break;
        }

        case 32:
        {
            OnlineGM p(buffer);
            p.dispatch(handler);
            break;
        }

        case 33:
        {
            OnlineMap p(buffer);
            p.dispatch(handler);
            break;
        }

        case 34:
        {
            Forgive p(buffer);
            p.dispatch(handler);
            break;
        }

        case 35:
        {
            Kick p(buffer);
            p.dispatch(handler);
            break;
        }

        case 36:
        {
            Execute p(buffer);
            p.dispatch(handler);
            break;
        }

        case 37:
        {
            BanChar p(buffer);
            p.dispatch(handler);
            break;
        }

        case 38:
        {
            UnbanChar p(buffer);
            p.dispatch(handler);
            break;
        }

        case 39:
        {
            NPCFollow p(buffer);
            p.dispatch(handler);
            break;
        }

        case 40:
        {
            SummonChar p(buffer);
            p.dispatch(handler);
            break;
        }

        case 41:
        {
            SpawnListRequest p(buffer);
            p.dispatch(handler);
            break;
        }

        case 42:
        {
            SpawnCreature p(buffer);
            p.dispatch(handler);
            break;
        }

        case 43:
        {
            ResetNPCInventory p(buffer);
            p.dispatch(handler);
            break;
        }

        case 44:
        {
            CleanWorld p(buffer);
            p.dispatch(handler);
            break;
        }

        case 45:
        {
            ServerMessage p(buffer);
            p.dispatch(handler);
            break;
        }

        case 46:
        {
            NickToIP p(buffer);
            p.dispatch(handler);
            break;
        }

        case 47:
        {
            IPToNick p(buffer);
            p.dispatch(handler);
            break;
        }

        case 48:
        {
            GuildOnlineMembers p(buffer);
            p.dispatch(handler);
            break;
        }

        case 49:
        {
            TeleportCreate p(buffer);
            p.dispatch(handler);
            break;
        }

        case 50:
        {
            TeleportDestroy p(buffer);
            p.dispatch(handler);
            break;
        }

        case 51:
        {
            RainToggle p(buffer);
            p.dispatch(handler);
            break;
        }

        case 52:
        {
            SetCharDescription p(buffer);
            p.dispatch(handler);
            break;
        }

        case 53:
        {
            ForceMIDIToMap p(buffer);
            p.dispatch(handler);
            break;
        }

        case 54:
        {
            ForceWAVEToMap p(buffer);
            p.dispatch(handler);
            break;
        }

        case 55:
        {
            RoyalArmyMessage p(buffer);
            p.dispatch(handler);
            break;
        }

        case 56:
        {
            ChaosLegionMessage p(buffer);
            p.dispatch(handler);
            break;
        }

        case 57:
        {
            CitizenMessage p(buffer);
            p.dispatch(handler);
            break;
        }

        case 58:
        {
            CriminalMessage p(buffer);
            p.dispatch(handler);
            break;
        }

        case 59:
        {
            TalkAsNPC p(buffer);
            p.dispatch(handler);
            break;
        }

        case 60:
        {
            DestroyAllItemsInArea p(buffer);
            p.dispatch(handler);
            break;
        }

        case 61:
        {
            AcceptRoyalCouncilMember p(buffer);
            p.dispatch(handler);
            break;
        }

        case 62:
        {
            AcceptChaosCouncilMember p(buffer);
            p.dispatch(handler);
            break;
        }

        case 63:
        {
            ItemsInTheFloor p(buffer);
            p.dispatch(handler);
            break;
        }

        case 64:
        {
            MakeDumb p(buffer);
            p.dispatch(handler);
            break;
        }

        case 65:
        {
            MakeDumbNoMore p(buffer);
            p.dispatch(handler);
            break;
        }

        case 66:
        {
            DumpIPTables p(buffer);
            p.dispatch(handler);
            break;
        }

        case 67:
        {
            CouncilKick p(buffer);
            p.dispatch(handler);
            break;
        }

        case 68:
        {
            SetTrigger p(buffer);
            p.dispatch(handler);
            break;
        }

        case 69:
        {
            AskTrigger p(buffer);
            p.dispatch(handler);
            break;
        }

        case 70:
        {
            BannedIPList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 71:
        {
            BannedIPReload p(buffer);
            p.dispatch(handler);
            break;
        }

        case 72:
        {
            GuildMemberList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 73:
        {
            GuildBan p(buffer);
            p.dispatch(handler);
            break;
        }

        case 74:
        {
            BanIP p(buffer);
            p.dispatch(handler);
            break;
        }

        case 75:
        {
            UnbanIP p(buffer);
            p.dispatch(handler);
            break;
        }

        case 76:
        {
            CreateItem p(buffer);
            p.dispatch(handler);
            break;
        }

        case 77:
        {
            DestroyItems p(buffer);
            p.dispatch(handler);
            break;
        }

        case 78:
        {
            ChaosLegionKick p(buffer);
            p.dispatch(handler);
            break;
        }

        case 79:
        {
            RoyalArmyKick p(buffer);
            p.dispatch(handler);
            break;
        }

        case 80:
        {
            ForceMIDIAll p(buffer);
            p.dispatch(handler);
            break;
        }

        case 81:
        {
            ForceWAVEAll p(buffer);
            p.dispatch(handler);
            break;
        }

        case 82:
        {
            RemovePunishment p(buffer);
            p.dispatch(handler);
            break;
        }

        case 83:
        {
            TileBlockedToggle p(buffer);
            p.dispatch(handler);
            break;
        }

        case 84:
        {
            KillNPCNoRespawn p(buffer);
            p.dispatch(handler);
            break;
        }

        case 85:
        {
            KillAllNearbyNPCs p(buffer);
            p.dispatch(handler);
            break;
        }

        case 86:
        {
            LastIP p(buffer);
            p.dispatch(handler);
            break;
        }

        case 87:
        {
            ChangeMOTD p(buffer);
            p.dispatch(handler);
            break;
        }

        case 88:
        {
            SetMOTD p(buffer);
            p.dispatch(handler);
            break;
        }

        case 89:
        {
            SystemMessage p(buffer);
            p.dispatch(handler);
            break;
        }

        case 90:
        {
            CreateNPC p(buffer);
            p.dispatch(handler);
            break;
        }

        case 91:
        {
            CreateNPCWithRespawn p(buffer);
            p.dispatch(handler);
            break;
        }

        case 92:
        {
            ImperialArmour p(buffer);
            p.dispatch(handler);
            break;
        }

        case 93:
        {
            ChaosArmour p(buffer);
            p.dispatch(handler);
            break;
        }

        case 94:
        {
            NavigateToggle p(buffer);
            p.dispatch(handler);
            break;
        }

        case 95:
        {
            ServerOpenToUsersToggle p(buffer);
            p.dispatch(handler);
            break;
        }

        case 96:
        {
            TurnOffServer p(buffer);
            p.dispatch(handler);
            break;
        }

        case 97:
        {
            TurnCriminal p(buffer);
            p.dispatch(handler);
            break;
        }

        case 98:
        {
            ResetFactions p(buffer);
            p.dispatch(handler);
            break;
        }

        case 99:
        {
            RemoveCharFromGuild p(buffer);
            p.dispatch(handler);
            break;
        }

        case 100:
        {
            RequestCharMail p(buffer);
            p.dispatch(handler);
            break;
        }

        case 101:
        {
            AlterPassword p(buffer);
            p.dispatch(handler);
            break;
        }

        case 102:
        {
            AlterMail p(buffer);
            p.dispatch(handler);
            break;
        }

        case 103:
        {
            AlterName p(buffer);
            p.dispatch(handler);
            break;
        }

        case 104:
        {
            ToggleCentinelActivated p(buffer);
            p.dispatch(handler);
            break;
        }

        case 105:
        {
            DoBackUp p(buffer);
            p.dispatch(handler);
            break;
        }

        case 106:
        {
            ShowGuildMessages p(buffer);
            p.dispatch(handler);
            break;
        }

        case 107:
        {
            SaveMap p(buffer);
            p.dispatch(handler);
            break;
        }

        case 108:
        {
            ChangeMapInfoPK p(buffer);
            p.dispatch(handler);
            break;
        }

        case 109:
        {
            ChangeMapInfoBackup p(buffer);
            p.dispatch(handler);
            break;
        }

        case 110:
        {
            ChangeMapInfoRestricted p(buffer);
            p.dispatch(handler);
            break;
        }

        case 111:
        {
            ChangeMapInfoNoMagic p(buffer);
            p.dispatch(handler);
            break;
        }

        case 112:
        {
            ChangeMapInfoNoInvi p(buffer);
            p.dispatch(handler);
            break;
        }

        case 113:
        {
            ChangeMapInfoNoResu p(buffer);
            p.dispatch(handler);
            break;
        }

        case 114:
        {
            ChangeMapInfoLand p(buffer);
            p.dispatch(handler);
            break;
        }

        case 115:
        {
            ChangeMapInfoZone p(buffer);
            p.dispatch(handler);
            break;
        }

        case 116:
        {
            ChangeMapInfoStealNpc p(buffer);
            p.dispatch(handler);
            break;
        }

        case 117:
        {
            ChangeMapInfoNoOcultar p(buffer);
            p.dispatch(handler);
            break;
        }

        case 118:
        {
            ChangeMapInfoNoInvocar p(buffer);
            p.dispatch(handler);
            break;
        }

        case 119:
        {
            SaveChars p(buffer);
            p.dispatch(handler);
            break;
        }

        case 120:
        {
            CleanSOS p(buffer);
            p.dispatch(handler);
            break;
        }

        case 121:
        {
            ShowServerForm p(buffer);
            p.dispatch(handler);
            break;
        }

        case 122:
        {
            Night p(buffer);
            p.dispatch(handler);
            break;
        }

        case 123:
        {
            KickAllChars p(buffer);
            p.dispatch(handler);
            break;
        }

        case 124:
        {
            ReloadNPCs p(buffer);
            p.dispatch(handler);
            break;
        }

        case 125:
        {
            ReloadServerIni p(buffer);
            p.dispatch(handler);
            break;
        }

        case 126:
        {
            ReloadSpells p(buffer);
            p.dispatch(handler);
            break;
        }

        case 127:
        {
            ReloadObjects p(buffer);
            p.dispatch(handler);
            break;
        }

        case 128:
        {
            Restart p(buffer);
            p.dispatch(handler);
            break;
        }

        case 129:
        {
            ResetAutoUpdate p(buffer);
            p.dispatch(handler);
            break;
        }

        case 130:
        {
            ChatColor p(buffer);
            p.dispatch(handler);
            break;
        }

        case 131:
        {
            Ignored p(buffer);
            p.dispatch(handler);
            break;
        }

        case 132:
        {
            CheckSlot p(buffer);
            p.dispatch(handler);
            break;
        }

        case 133:
        {
            SetIniVar p(buffer);
            p.dispatch(handler);
            break;
        }

        case 134:
        {
            CreatePretorianClan p(buffer);
            p.dispatch(handler);
            break;
        }

        case 135:
        {
            RemovePretorianClan p(buffer);
            p.dispatch(handler);
            break;
        }

        case 136:
        {
            EnableDenounces p(buffer);
            p.dispatch(handler);
            break;
        }

        case 137:
        {
            ShowDenouncesList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 138:
        {
            MapMessage p(buffer);
            p.dispatch(handler);
            break;
        }

        case 139:
        {
            SetDialog p(buffer);
            p.dispatch(handler);
            break;
        }

        case 140:
        {
            Impersonate p(buffer);
            p.dispatch(handler);
            break;
        }

        case 141:
        {
            Imitate p(buffer);
            p.dispatch(handler);
            break;
        }

        case 142:
        {
            RecordAdd p(buffer);
            p.dispatch(handler);
            break;
        }

        case 143:
        {
            RecordRemove p(buffer);
            p.dispatch(handler);
            break;
        }

        case 144:
        {
            RecordAddObs p(buffer);
            p.dispatch(handler);
            break;
        }

        case 145:
        {
            RecordListRequest p(buffer);
            p.dispatch(handler);
            break;
        }

        case 146:
        {
            RecordDetailsRequest p(buffer);
            p.dispatch(handler);
            break;
        }

        case 147:
        {
            AlterGuildName p(buffer);
            p.dispatch(handler);
            break;
        }

        case 148:
        {
            HigherAdminsMessage p(buffer);
            p.dispatch(handler);
            break;
        }

        default:
        {
            std::stringstream ss;
            ss << "error decoding packet id: " << PacketID;
            throw PacketDecodingError(ss.str());
        }
    }
}

GMMessage::GMMessage() : ClientGMPacket(ClientGMPacketID_GMMessage /* 1 */), Chat() {
}

GMMessage::GMMessage(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_GMMessage /* 1 */) {
    buffer->ReadByte(); /* PacketID */
    Chat = buffer->ReadUnicodeString();

}

GMMessage::GMMessage(const std::string& Chat_) : ClientGMPacket(ClientGMPacketID_GMMessage /* 1 */), Chat(Chat_) {
}

void GMMessage::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_GMMessage); /* PacketID: 1 */
    buffer->WriteUnicodeString(Chat);

}

void GMMessage::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleGMMessage(this);
}

ShowName::ShowName() : ClientGMPacket(ClientGMPacketID_ShowName /* 2 */) {
}

ShowName::ShowName(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ShowName /* 2 */) {
    buffer->ReadByte(); /* PacketID */

}

void ShowName::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ShowName); /* PacketID: 2 */

}

void ShowName::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleShowName(this);
}

OnlineRoyalArmy::OnlineRoyalArmy() : ClientGMPacket(ClientGMPacketID_OnlineRoyalArmy /* 3 */) {
}

OnlineRoyalArmy::OnlineRoyalArmy(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_OnlineRoyalArmy /* 3 */) {
    buffer->ReadByte(); /* PacketID */

}

void OnlineRoyalArmy::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_OnlineRoyalArmy); /* PacketID: 3 */

}

void OnlineRoyalArmy::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleOnlineRoyalArmy(this);
}

OnlineChaosLegion::OnlineChaosLegion() : ClientGMPacket(ClientGMPacketID_OnlineChaosLegion /* 4 */) {
}

OnlineChaosLegion::OnlineChaosLegion(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_OnlineChaosLegion /* 4 */) {
    buffer->ReadByte(); /* PacketID */

}

void OnlineChaosLegion::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_OnlineChaosLegion); /* PacketID: 4 */

}

void OnlineChaosLegion::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleOnlineChaosLegion(this);
}

GoNearby::GoNearby() : ClientGMPacket(ClientGMPacketID_GoNearby /* 5 */), UserName() {
}

GoNearby::GoNearby(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_GoNearby /* 5 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

GoNearby::GoNearby(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_GoNearby /* 5 */), UserName(UserName_) {
}

void GoNearby::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_GoNearby); /* PacketID: 5 */
    buffer->WriteUnicodeString(UserName);

}

void GoNearby::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleGoNearby(this);
}

Comment::Comment() : ClientGMPacket(ClientGMPacketID_Comment /* 6 */), Data() {
}

Comment::Comment(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Comment /* 6 */) {
    buffer->ReadByte(); /* PacketID */
    Data = buffer->ReadUnicodeString();

}

Comment::Comment(const std::string& Data_) : ClientGMPacket(ClientGMPacketID_Comment /* 6 */), Data(Data_) {
}

void Comment::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Comment); /* PacketID: 6 */
    buffer->WriteUnicodeString(Data);

}

void Comment::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleComment(this);
}

ServerTime::ServerTime() : ClientGMPacket(ClientGMPacketID_ServerTime /* 7 */) {
}

ServerTime::ServerTime(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ServerTime /* 7 */) {
    buffer->ReadByte(); /* PacketID */

}

void ServerTime::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ServerTime); /* PacketID: 7 */

}

void ServerTime::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleServerTime(this);
}

Where::Where() : ClientGMPacket(ClientGMPacketID_Where /* 8 */), UserName() {
}

Where::Where(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Where /* 8 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

Where::Where(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_Where /* 8 */), UserName(UserName_) {
}

void Where::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Where); /* PacketID: 8 */
    buffer->WriteUnicodeString(UserName);

}

void Where::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleWhere(this);
}

CreaturesInMap::CreaturesInMap() : ClientGMPacket(ClientGMPacketID_CreaturesInMap /* 9 */), Map() {
}

CreaturesInMap::CreaturesInMap(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_CreaturesInMap /* 9 */) {
    buffer->ReadByte(); /* PacketID */
    Map = buffer->ReadInteger();

}

CreaturesInMap::CreaturesInMap(std::int16_t Map_) : ClientGMPacket(ClientGMPacketID_CreaturesInMap /* 9 */), Map(Map_) {
}

void CreaturesInMap::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_CreaturesInMap); /* PacketID: 9 */
    buffer->WriteInteger(Map);

}

void CreaturesInMap::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleCreaturesInMap(this);
}

WarpMeToTarget::WarpMeToTarget() : ClientGMPacket(ClientGMPacketID_WarpMeToTarget /* 10 */) {
}

WarpMeToTarget::WarpMeToTarget(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_WarpMeToTarget /* 10 */) {
    buffer->ReadByte(); /* PacketID */

}

void WarpMeToTarget::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_WarpMeToTarget); /* PacketID: 10 */

}

void WarpMeToTarget::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleWarpMeToTarget(this);
}

WarpChar::WarpChar() : ClientGMPacket(ClientGMPacketID_WarpChar /* 11 */), UserName(), Map(), X(), Y() {
}

WarpChar::WarpChar(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_WarpChar /* 11 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    Map = buffer->ReadInteger();
    X = buffer->ReadByte();
    Y = buffer->ReadByte();

}

WarpChar::WarpChar(const std::string& UserName_, std::int16_t Map_, std::uint8_t X_, std::uint8_t Y_) : ClientGMPacket(ClientGMPacketID_WarpChar /* 11 */), UserName(UserName_), Map(Map_), X(X_), Y(Y_) {
}

void WarpChar::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_WarpChar); /* PacketID: 11 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteInteger(Map);
    buffer->WriteByte(X);
    buffer->WriteByte(Y);

}

void WarpChar::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleWarpChar(this);
}

Silence::Silence() : ClientGMPacket(ClientGMPacketID_Silence /* 12 */), UserName() {
}

Silence::Silence(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Silence /* 12 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

Silence::Silence(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_Silence /* 12 */), UserName(UserName_) {
}

void Silence::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Silence); /* PacketID: 12 */
    buffer->WriteUnicodeString(UserName);

}

void Silence::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSilence(this);
}

SOSShowList::SOSShowList() : ClientGMPacket(ClientGMPacketID_SOSShowList /* 13 */) {
}

SOSShowList::SOSShowList(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_SOSShowList /* 13 */) {
    buffer->ReadByte(); /* PacketID */

}

void SOSShowList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_SOSShowList); /* PacketID: 13 */

}

void SOSShowList::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSOSShowList(this);
}

SOSRemove::SOSRemove() : ClientGMPacket(ClientGMPacketID_SOSRemove /* 14 */), UserName() {
}

SOSRemove::SOSRemove(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_SOSRemove /* 14 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

SOSRemove::SOSRemove(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_SOSRemove /* 14 */), UserName(UserName_) {
}

void SOSRemove::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_SOSRemove); /* PacketID: 14 */
    buffer->WriteUnicodeString(UserName);

}

void SOSRemove::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSOSRemove(this);
}

GoToChar::GoToChar() : ClientGMPacket(ClientGMPacketID_GoToChar /* 15 */), UserName() {
}

GoToChar::GoToChar(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_GoToChar /* 15 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

GoToChar::GoToChar(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_GoToChar /* 15 */), UserName(UserName_) {
}

void GoToChar::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_GoToChar); /* PacketID: 15 */
    buffer->WriteUnicodeString(UserName);

}

void GoToChar::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleGoToChar(this);
}

Invisible::Invisible() : ClientGMPacket(ClientGMPacketID_Invisible /* 16 */) {
}

Invisible::Invisible(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Invisible /* 16 */) {
    buffer->ReadByte(); /* PacketID */

}

void Invisible::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Invisible); /* PacketID: 16 */

}

void Invisible::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleInvisible(this);
}

GMPanel::GMPanel() : ClientGMPacket(ClientGMPacketID_GMPanel /* 17 */) {
}

GMPanel::GMPanel(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_GMPanel /* 17 */) {
    buffer->ReadByte(); /* PacketID */

}

void GMPanel::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_GMPanel); /* PacketID: 17 */

}

void GMPanel::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleGMPanel(this);
}

RequestUserList::RequestUserList() : ClientGMPacket(ClientGMPacketID_RequestUserList /* 18 */) {
}

RequestUserList::RequestUserList(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RequestUserList /* 18 */) {
    buffer->ReadByte(); /* PacketID */

}

void RequestUserList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RequestUserList); /* PacketID: 18 */

}

void RequestUserList::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRequestUserList(this);
}

Working::Working() : ClientGMPacket(ClientGMPacketID_Working /* 19 */) {
}

Working::Working(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Working /* 19 */) {
    buffer->ReadByte(); /* PacketID */

}

void Working::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Working); /* PacketID: 19 */

}

void Working::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleWorking(this);
}

Hiding::Hiding() : ClientGMPacket(ClientGMPacketID_Hiding /* 20 */) {
}

Hiding::Hiding(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Hiding /* 20 */) {
    buffer->ReadByte(); /* PacketID */

}

void Hiding::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Hiding); /* PacketID: 20 */

}

void Hiding::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleHiding(this);
}

Jail::Jail() : ClientGMPacket(ClientGMPacketID_Jail /* 21 */), UserName(), Reason(), JailTime() {
}

Jail::Jail(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Jail /* 21 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    Reason = buffer->ReadUnicodeString();
    JailTime = buffer->ReadByte();

}

Jail::Jail(const std::string& UserName_, const std::string& Reason_, std::uint8_t JailTime_) : ClientGMPacket(ClientGMPacketID_Jail /* 21 */), UserName(UserName_), Reason(Reason_), JailTime(JailTime_) {
}

void Jail::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Jail); /* PacketID: 21 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteUnicodeString(Reason);
    buffer->WriteByte(JailTime);

}

void Jail::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleJail(this);
}

KillNPC::KillNPC() : ClientGMPacket(ClientGMPacketID_KillNPC /* 22 */) {
}

KillNPC::KillNPC(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_KillNPC /* 22 */) {
    buffer->ReadByte(); /* PacketID */

}

void KillNPC::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_KillNPC); /* PacketID: 22 */

}

void KillNPC::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleKillNPC(this);
}

WarnUser::WarnUser() : ClientGMPacket(ClientGMPacketID_WarnUser /* 23 */), UserName(), Reason() {
}

WarnUser::WarnUser(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_WarnUser /* 23 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    Reason = buffer->ReadUnicodeString();

}

WarnUser::WarnUser(const std::string& UserName_, const std::string& Reason_) : ClientGMPacket(ClientGMPacketID_WarnUser /* 23 */), UserName(UserName_), Reason(Reason_) {
}

void WarnUser::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_WarnUser); /* PacketID: 23 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteUnicodeString(Reason);

}

void WarnUser::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleWarnUser(this);
}

EditChar::EditChar() : ClientGMPacket(ClientGMPacketID_EditChar /* 24 */), UserName(), Opcion(), Arg1(), Arg2() {
}

EditChar::EditChar(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_EditChar /* 24 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    Opcion = buffer->ReadByte();
    Arg1 = buffer->ReadUnicodeString();
    Arg2 = buffer->ReadUnicodeString();

}

EditChar::EditChar(const std::string& UserName_, std::uint8_t Opcion_, const std::string& Arg1_, const std::string& Arg2_) : ClientGMPacket(ClientGMPacketID_EditChar /* 24 */), UserName(UserName_), Opcion(Opcion_), Arg1(Arg1_), Arg2(Arg2_) {
}

void EditChar::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_EditChar); /* PacketID: 24 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteByte(Opcion);
    buffer->WriteUnicodeString(Arg1);
    buffer->WriteUnicodeString(Arg2);

}

void EditChar::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleEditChar(this);
}

RequestCharInfo::RequestCharInfo() : ClientGMPacket(ClientGMPacketID_RequestCharInfo /* 25 */), TargetName() {
}

RequestCharInfo::RequestCharInfo(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RequestCharInfo /* 25 */) {
    buffer->ReadByte(); /* PacketID */
    TargetName = buffer->ReadUnicodeString();

}

RequestCharInfo::RequestCharInfo(const std::string& TargetName_) : ClientGMPacket(ClientGMPacketID_RequestCharInfo /* 25 */), TargetName(TargetName_) {
}

void RequestCharInfo::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RequestCharInfo); /* PacketID: 25 */
    buffer->WriteUnicodeString(TargetName);

}

void RequestCharInfo::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRequestCharInfo(this);
}

RequestCharStats::RequestCharStats() : ClientGMPacket(ClientGMPacketID_RequestCharStats /* 26 */), UserName() {
}

RequestCharStats::RequestCharStats(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RequestCharStats /* 26 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

RequestCharStats::RequestCharStats(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_RequestCharStats /* 26 */), UserName(UserName_) {
}

void RequestCharStats::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RequestCharStats); /* PacketID: 26 */
    buffer->WriteUnicodeString(UserName);

}

void RequestCharStats::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRequestCharStats(this);
}

RequestCharGold::RequestCharGold() : ClientGMPacket(ClientGMPacketID_RequestCharGold /* 27 */), UserName() {
}

RequestCharGold::RequestCharGold(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RequestCharGold /* 27 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

RequestCharGold::RequestCharGold(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_RequestCharGold /* 27 */), UserName(UserName_) {
}

void RequestCharGold::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RequestCharGold); /* PacketID: 27 */
    buffer->WriteUnicodeString(UserName);

}

void RequestCharGold::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRequestCharGold(this);
}

RequestCharInventory::RequestCharInventory() : ClientGMPacket(ClientGMPacketID_RequestCharInventory /* 28 */), UserName() {
}

RequestCharInventory::RequestCharInventory(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RequestCharInventory /* 28 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

RequestCharInventory::RequestCharInventory(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_RequestCharInventory /* 28 */), UserName(UserName_) {
}

void RequestCharInventory::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RequestCharInventory); /* PacketID: 28 */
    buffer->WriteUnicodeString(UserName);

}

void RequestCharInventory::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRequestCharInventory(this);
}

RequestCharBank::RequestCharBank() : ClientGMPacket(ClientGMPacketID_RequestCharBank /* 29 */), UserName() {
}

RequestCharBank::RequestCharBank(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RequestCharBank /* 29 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

RequestCharBank::RequestCharBank(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_RequestCharBank /* 29 */), UserName(UserName_) {
}

void RequestCharBank::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RequestCharBank); /* PacketID: 29 */
    buffer->WriteUnicodeString(UserName);

}

void RequestCharBank::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRequestCharBank(this);
}

RequestCharSkills::RequestCharSkills() : ClientGMPacket(ClientGMPacketID_RequestCharSkills /* 30 */), UserName() {
}

RequestCharSkills::RequestCharSkills(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RequestCharSkills /* 30 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

RequestCharSkills::RequestCharSkills(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_RequestCharSkills /* 30 */), UserName(UserName_) {
}

void RequestCharSkills::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RequestCharSkills); /* PacketID: 30 */
    buffer->WriteUnicodeString(UserName);

}

void RequestCharSkills::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRequestCharSkills(this);
}

ReviveChar::ReviveChar() : ClientGMPacket(ClientGMPacketID_ReviveChar /* 31 */), UserName() {
}

ReviveChar::ReviveChar(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ReviveChar /* 31 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

ReviveChar::ReviveChar(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_ReviveChar /* 31 */), UserName(UserName_) {
}

void ReviveChar::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ReviveChar); /* PacketID: 31 */
    buffer->WriteUnicodeString(UserName);

}

void ReviveChar::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleReviveChar(this);
}

OnlineGM::OnlineGM() : ClientGMPacket(ClientGMPacketID_OnlineGM /* 32 */) {
}

OnlineGM::OnlineGM(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_OnlineGM /* 32 */) {
    buffer->ReadByte(); /* PacketID */

}

void OnlineGM::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_OnlineGM); /* PacketID: 32 */

}

void OnlineGM::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleOnlineGM(this);
}

OnlineMap::OnlineMap() : ClientGMPacket(ClientGMPacketID_OnlineMap /* 33 */), Map() {
}

OnlineMap::OnlineMap(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_OnlineMap /* 33 */) {
    buffer->ReadByte(); /* PacketID */
    Map = buffer->ReadInteger();

}

OnlineMap::OnlineMap(std::int16_t Map_) : ClientGMPacket(ClientGMPacketID_OnlineMap /* 33 */), Map(Map_) {
}

void OnlineMap::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_OnlineMap); /* PacketID: 33 */
    buffer->WriteInteger(Map);

}

void OnlineMap::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleOnlineMap(this);
}

Forgive::Forgive() : ClientGMPacket(ClientGMPacketID_Forgive /* 34 */), UserName() {
}

Forgive::Forgive(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Forgive /* 34 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

Forgive::Forgive(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_Forgive /* 34 */), UserName(UserName_) {
}

void Forgive::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Forgive); /* PacketID: 34 */
    buffer->WriteUnicodeString(UserName);

}

void Forgive::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleForgive(this);
}

Kick::Kick() : ClientGMPacket(ClientGMPacketID_Kick /* 35 */), UserName() {
}

Kick::Kick(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Kick /* 35 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

Kick::Kick(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_Kick /* 35 */), UserName(UserName_) {
}

void Kick::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Kick); /* PacketID: 35 */
    buffer->WriteUnicodeString(UserName);

}

void Kick::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleKick(this);
}

Execute::Execute() : ClientGMPacket(ClientGMPacketID_Execute /* 36 */), UserName() {
}

Execute::Execute(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Execute /* 36 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

Execute::Execute(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_Execute /* 36 */), UserName(UserName_) {
}

void Execute::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Execute); /* PacketID: 36 */
    buffer->WriteUnicodeString(UserName);

}

void Execute::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleExecute(this);
}

BanChar::BanChar() : ClientGMPacket(ClientGMPacketID_BanChar /* 37 */), UserName(), Reason() {
}

BanChar::BanChar(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_BanChar /* 37 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    Reason = buffer->ReadUnicodeString();

}

BanChar::BanChar(const std::string& UserName_, const std::string& Reason_) : ClientGMPacket(ClientGMPacketID_BanChar /* 37 */), UserName(UserName_), Reason(Reason_) {
}

void BanChar::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_BanChar); /* PacketID: 37 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteUnicodeString(Reason);

}

void BanChar::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleBanChar(this);
}

UnbanChar::UnbanChar() : ClientGMPacket(ClientGMPacketID_UnbanChar /* 38 */), UserName() {
}

UnbanChar::UnbanChar(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_UnbanChar /* 38 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

UnbanChar::UnbanChar(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_UnbanChar /* 38 */), UserName(UserName_) {
}

void UnbanChar::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_UnbanChar); /* PacketID: 38 */
    buffer->WriteUnicodeString(UserName);

}

void UnbanChar::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleUnbanChar(this);
}

NPCFollow::NPCFollow() : ClientGMPacket(ClientGMPacketID_NPCFollow /* 39 */) {
}

NPCFollow::NPCFollow(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_NPCFollow /* 39 */) {
    buffer->ReadByte(); /* PacketID */

}

void NPCFollow::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_NPCFollow); /* PacketID: 39 */

}

void NPCFollow::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleNPCFollow(this);
}

SummonChar::SummonChar() : ClientGMPacket(ClientGMPacketID_SummonChar /* 40 */), UserName() {
}

SummonChar::SummonChar(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_SummonChar /* 40 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

SummonChar::SummonChar(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_SummonChar /* 40 */), UserName(UserName_) {
}

void SummonChar::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_SummonChar); /* PacketID: 40 */
    buffer->WriteUnicodeString(UserName);

}

void SummonChar::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSummonChar(this);
}

SpawnListRequest::SpawnListRequest() : ClientGMPacket(ClientGMPacketID_SpawnListRequest /* 41 */) {
}

SpawnListRequest::SpawnListRequest(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_SpawnListRequest /* 41 */) {
    buffer->ReadByte(); /* PacketID */

}

void SpawnListRequest::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_SpawnListRequest); /* PacketID: 41 */

}

void SpawnListRequest::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSpawnListRequest(this);
}

SpawnCreature::SpawnCreature() : ClientGMPacket(ClientGMPacketID_SpawnCreature /* 42 */), NPC() {
}

SpawnCreature::SpawnCreature(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_SpawnCreature /* 42 */) {
    buffer->ReadByte(); /* PacketID */
    NPC = buffer->ReadInteger();

}

SpawnCreature::SpawnCreature(std::int16_t NPC_) : ClientGMPacket(ClientGMPacketID_SpawnCreature /* 42 */), NPC(NPC_) {
}

void SpawnCreature::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_SpawnCreature); /* PacketID: 42 */
    buffer->WriteInteger(NPC);

}

void SpawnCreature::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSpawnCreature(this);
}

ResetNPCInventory::ResetNPCInventory() : ClientGMPacket(ClientGMPacketID_ResetNPCInventory /* 43 */) {
}

ResetNPCInventory::ResetNPCInventory(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ResetNPCInventory /* 43 */) {
    buffer->ReadByte(); /* PacketID */

}

void ResetNPCInventory::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ResetNPCInventory); /* PacketID: 43 */

}

void ResetNPCInventory::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleResetNPCInventory(this);
}

CleanWorld::CleanWorld() : ClientGMPacket(ClientGMPacketID_CleanWorld /* 44 */) {
}

CleanWorld::CleanWorld(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_CleanWorld /* 44 */) {
    buffer->ReadByte(); /* PacketID */

}

void CleanWorld::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_CleanWorld); /* PacketID: 44 */

}

void CleanWorld::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleCleanWorld(this);
}

ServerMessage::ServerMessage() : ClientGMPacket(ClientGMPacketID_ServerMessage /* 45 */), Message() {
}

ServerMessage::ServerMessage(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ServerMessage /* 45 */) {
    buffer->ReadByte(); /* PacketID */
    Message = buffer->ReadUnicodeString();

}

ServerMessage::ServerMessage(const std::string& Message_) : ClientGMPacket(ClientGMPacketID_ServerMessage /* 45 */), Message(Message_) {
}

void ServerMessage::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ServerMessage); /* PacketID: 45 */
    buffer->WriteUnicodeString(Message);

}

void ServerMessage::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleServerMessage(this);
}

NickToIP::NickToIP() : ClientGMPacket(ClientGMPacketID_NickToIP /* 46 */), UserName() {
}

NickToIP::NickToIP(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_NickToIP /* 46 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

NickToIP::NickToIP(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_NickToIP /* 46 */), UserName(UserName_) {
}

void NickToIP::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_NickToIP); /* PacketID: 46 */
    buffer->WriteUnicodeString(UserName);

}

void NickToIP::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleNickToIP(this);
}

IPToNick::IPToNick() : ClientGMPacket(ClientGMPacketID_IPToNick /* 47 */), A(), B(), C(), D() {
}

IPToNick::IPToNick(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_IPToNick /* 47 */) {
    buffer->ReadByte(); /* PacketID */
    A = buffer->ReadByte();
    B = buffer->ReadByte();
    C = buffer->ReadByte();
    D = buffer->ReadByte();

}

IPToNick::IPToNick(std::uint8_t A_, std::uint8_t B_, std::uint8_t C_, std::uint8_t D_) : ClientGMPacket(ClientGMPacketID_IPToNick /* 47 */), A(A_), B(B_), C(C_), D(D_) {
}

void IPToNick::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_IPToNick); /* PacketID: 47 */
    buffer->WriteByte(A);
    buffer->WriteByte(B);
    buffer->WriteByte(C);
    buffer->WriteByte(D);

}

void IPToNick::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleIPToNick(this);
}

GuildOnlineMembers::GuildOnlineMembers() : ClientGMPacket(ClientGMPacketID_GuildOnlineMembers /* 48 */), GuildName() {
}

GuildOnlineMembers::GuildOnlineMembers(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_GuildOnlineMembers /* 48 */) {
    buffer->ReadByte(); /* PacketID */
    GuildName = buffer->ReadUnicodeString();

}

GuildOnlineMembers::GuildOnlineMembers(const std::string& GuildName_) : ClientGMPacket(ClientGMPacketID_GuildOnlineMembers /* 48 */), GuildName(GuildName_) {
}

void GuildOnlineMembers::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_GuildOnlineMembers); /* PacketID: 48 */
    buffer->WriteUnicodeString(GuildName);

}

void GuildOnlineMembers::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleGuildOnlineMembers(this);
}

TeleportCreate::TeleportCreate() : ClientGMPacket(ClientGMPacketID_TeleportCreate /* 49 */), Map(), X(), Y(), Radio() {
}

TeleportCreate::TeleportCreate(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_TeleportCreate /* 49 */) {
    buffer->ReadByte(); /* PacketID */
    Map = buffer->ReadInteger();
    X = buffer->ReadByte();
    Y = buffer->ReadByte();
    Radio = buffer->ReadByte();

}

TeleportCreate::TeleportCreate(std::int16_t Map_, std::uint8_t X_, std::uint8_t Y_, std::uint8_t Radio_) : ClientGMPacket(ClientGMPacketID_TeleportCreate /* 49 */), Map(Map_), X(X_), Y(Y_), Radio(Radio_) {
}

void TeleportCreate::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_TeleportCreate); /* PacketID: 49 */
    buffer->WriteInteger(Map);
    buffer->WriteByte(X);
    buffer->WriteByte(Y);
    buffer->WriteByte(Radio);

}

void TeleportCreate::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleTeleportCreate(this);
}

TeleportDestroy::TeleportDestroy() : ClientGMPacket(ClientGMPacketID_TeleportDestroy /* 50 */) {
}

TeleportDestroy::TeleportDestroy(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_TeleportDestroy /* 50 */) {
    buffer->ReadByte(); /* PacketID */

}

void TeleportDestroy::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_TeleportDestroy); /* PacketID: 50 */

}

void TeleportDestroy::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleTeleportDestroy(this);
}

RainToggle::RainToggle() : ClientGMPacket(ClientGMPacketID_RainToggle /* 51 */) {
}

RainToggle::RainToggle(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RainToggle /* 51 */) {
    buffer->ReadByte(); /* PacketID */

}

void RainToggle::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RainToggle); /* PacketID: 51 */

}

void RainToggle::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRainToggle(this);
}

SetCharDescription::SetCharDescription() : ClientGMPacket(ClientGMPacketID_SetCharDescription /* 52 */), Description() {
}

SetCharDescription::SetCharDescription(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_SetCharDescription /* 52 */) {
    buffer->ReadByte(); /* PacketID */
    Description = buffer->ReadUnicodeString();

}

SetCharDescription::SetCharDescription(const std::string& Description_) : ClientGMPacket(ClientGMPacketID_SetCharDescription /* 52 */), Description(Description_) {
}

void SetCharDescription::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_SetCharDescription); /* PacketID: 52 */
    buffer->WriteUnicodeString(Description);

}

void SetCharDescription::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSetCharDescription(this);
}

ForceMIDIToMap::ForceMIDIToMap() : ClientGMPacket(ClientGMPacketID_ForceMIDIToMap /* 53 */), MidiID(), Map() {
}

ForceMIDIToMap::ForceMIDIToMap(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ForceMIDIToMap /* 53 */) {
    buffer->ReadByte(); /* PacketID */
    MidiID = buffer->ReadByte();
    Map = buffer->ReadInteger();

}

ForceMIDIToMap::ForceMIDIToMap(std::uint8_t MidiID_, std::int16_t Map_) : ClientGMPacket(ClientGMPacketID_ForceMIDIToMap /* 53 */), MidiID(MidiID_), Map(Map_) {
}

void ForceMIDIToMap::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ForceMIDIToMap); /* PacketID: 53 */
    buffer->WriteByte(MidiID);
    buffer->WriteInteger(Map);

}

void ForceMIDIToMap::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleForceMIDIToMap(this);
}

ForceWAVEToMap::ForceWAVEToMap() : ClientGMPacket(ClientGMPacketID_ForceWAVEToMap /* 54 */), Wave(), Map(), X(), Y() {
}

ForceWAVEToMap::ForceWAVEToMap(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ForceWAVEToMap /* 54 */) {
    buffer->ReadByte(); /* PacketID */
    Wave = buffer->ReadByte();
    Map = buffer->ReadInteger();
    X = buffer->ReadByte();
    Y = buffer->ReadByte();

}

ForceWAVEToMap::ForceWAVEToMap(std::uint8_t Wave_, std::int16_t Map_, std::uint8_t X_, std::uint8_t Y_) : ClientGMPacket(ClientGMPacketID_ForceWAVEToMap /* 54 */), Wave(Wave_), Map(Map_), X(X_), Y(Y_) {
}

void ForceWAVEToMap::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ForceWAVEToMap); /* PacketID: 54 */
    buffer->WriteByte(Wave);
    buffer->WriteInteger(Map);
    buffer->WriteByte(X);
    buffer->WriteByte(Y);

}

void ForceWAVEToMap::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleForceWAVEToMap(this);
}

RoyalArmyMessage::RoyalArmyMessage() : ClientGMPacket(ClientGMPacketID_RoyalArmyMessage /* 55 */), Message() {
}

RoyalArmyMessage::RoyalArmyMessage(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RoyalArmyMessage /* 55 */) {
    buffer->ReadByte(); /* PacketID */
    Message = buffer->ReadUnicodeString();

}

RoyalArmyMessage::RoyalArmyMessage(const std::string& Message_) : ClientGMPacket(ClientGMPacketID_RoyalArmyMessage /* 55 */), Message(Message_) {
}

void RoyalArmyMessage::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RoyalArmyMessage); /* PacketID: 55 */
    buffer->WriteUnicodeString(Message);

}

void RoyalArmyMessage::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRoyalArmyMessage(this);
}

ChaosLegionMessage::ChaosLegionMessage() : ClientGMPacket(ClientGMPacketID_ChaosLegionMessage /* 56 */), Message() {
}

ChaosLegionMessage::ChaosLegionMessage(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChaosLegionMessage /* 56 */) {
    buffer->ReadByte(); /* PacketID */
    Message = buffer->ReadUnicodeString();

}

ChaosLegionMessage::ChaosLegionMessage(const std::string& Message_) : ClientGMPacket(ClientGMPacketID_ChaosLegionMessage /* 56 */), Message(Message_) {
}

void ChaosLegionMessage::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChaosLegionMessage); /* PacketID: 56 */
    buffer->WriteUnicodeString(Message);

}

void ChaosLegionMessage::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChaosLegionMessage(this);
}

CitizenMessage::CitizenMessage() : ClientGMPacket(ClientGMPacketID_CitizenMessage /* 57 */), Message() {
}

CitizenMessage::CitizenMessage(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_CitizenMessage /* 57 */) {
    buffer->ReadByte(); /* PacketID */
    Message = buffer->ReadUnicodeString();

}

CitizenMessage::CitizenMessage(const std::string& Message_) : ClientGMPacket(ClientGMPacketID_CitizenMessage /* 57 */), Message(Message_) {
}

void CitizenMessage::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_CitizenMessage); /* PacketID: 57 */
    buffer->WriteUnicodeString(Message);

}

void CitizenMessage::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleCitizenMessage(this);
}

CriminalMessage::CriminalMessage() : ClientGMPacket(ClientGMPacketID_CriminalMessage /* 58 */), Message() {
}

CriminalMessage::CriminalMessage(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_CriminalMessage /* 58 */) {
    buffer->ReadByte(); /* PacketID */
    Message = buffer->ReadUnicodeString();

}

CriminalMessage::CriminalMessage(const std::string& Message_) : ClientGMPacket(ClientGMPacketID_CriminalMessage /* 58 */), Message(Message_) {
}

void CriminalMessage::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_CriminalMessage); /* PacketID: 58 */
    buffer->WriteUnicodeString(Message);

}

void CriminalMessage::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleCriminalMessage(this);
}

TalkAsNPC::TalkAsNPC() : ClientGMPacket(ClientGMPacketID_TalkAsNPC /* 59 */), Message() {
}

TalkAsNPC::TalkAsNPC(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_TalkAsNPC /* 59 */) {
    buffer->ReadByte(); /* PacketID */
    Message = buffer->ReadUnicodeString();

}

TalkAsNPC::TalkAsNPC(const std::string& Message_) : ClientGMPacket(ClientGMPacketID_TalkAsNPC /* 59 */), Message(Message_) {
}

void TalkAsNPC::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_TalkAsNPC); /* PacketID: 59 */
    buffer->WriteUnicodeString(Message);

}

void TalkAsNPC::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleTalkAsNPC(this);
}

DestroyAllItemsInArea::DestroyAllItemsInArea() : ClientGMPacket(ClientGMPacketID_DestroyAllItemsInArea /* 60 */) {
}

DestroyAllItemsInArea::DestroyAllItemsInArea(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_DestroyAllItemsInArea /* 60 */) {
    buffer->ReadByte(); /* PacketID */

}

void DestroyAllItemsInArea::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_DestroyAllItemsInArea); /* PacketID: 60 */

}

void DestroyAllItemsInArea::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleDestroyAllItemsInArea(this);
}

AcceptRoyalCouncilMember::AcceptRoyalCouncilMember() : ClientGMPacket(ClientGMPacketID_AcceptRoyalCouncilMember /* 61 */), UserName() {
}

AcceptRoyalCouncilMember::AcceptRoyalCouncilMember(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_AcceptRoyalCouncilMember /* 61 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

AcceptRoyalCouncilMember::AcceptRoyalCouncilMember(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_AcceptRoyalCouncilMember /* 61 */), UserName(UserName_) {
}

void AcceptRoyalCouncilMember::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_AcceptRoyalCouncilMember); /* PacketID: 61 */
    buffer->WriteUnicodeString(UserName);

}

void AcceptRoyalCouncilMember::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleAcceptRoyalCouncilMember(this);
}

AcceptChaosCouncilMember::AcceptChaosCouncilMember() : ClientGMPacket(ClientGMPacketID_AcceptChaosCouncilMember /* 62 */), UserName() {
}

AcceptChaosCouncilMember::AcceptChaosCouncilMember(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_AcceptChaosCouncilMember /* 62 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

AcceptChaosCouncilMember::AcceptChaosCouncilMember(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_AcceptChaosCouncilMember /* 62 */), UserName(UserName_) {
}

void AcceptChaosCouncilMember::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_AcceptChaosCouncilMember); /* PacketID: 62 */
    buffer->WriteUnicodeString(UserName);

}

void AcceptChaosCouncilMember::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleAcceptChaosCouncilMember(this);
}

ItemsInTheFloor::ItemsInTheFloor() : ClientGMPacket(ClientGMPacketID_ItemsInTheFloor /* 63 */) {
}

ItemsInTheFloor::ItemsInTheFloor(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ItemsInTheFloor /* 63 */) {
    buffer->ReadByte(); /* PacketID */

}

void ItemsInTheFloor::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ItemsInTheFloor); /* PacketID: 63 */

}

void ItemsInTheFloor::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleItemsInTheFloor(this);
}

MakeDumb::MakeDumb() : ClientGMPacket(ClientGMPacketID_MakeDumb /* 64 */), UserName() {
}

MakeDumb::MakeDumb(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_MakeDumb /* 64 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

MakeDumb::MakeDumb(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_MakeDumb /* 64 */), UserName(UserName_) {
}

void MakeDumb::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_MakeDumb); /* PacketID: 64 */
    buffer->WriteUnicodeString(UserName);

}

void MakeDumb::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleMakeDumb(this);
}

MakeDumbNoMore::MakeDumbNoMore() : ClientGMPacket(ClientGMPacketID_MakeDumbNoMore /* 65 */), UserName() {
}

MakeDumbNoMore::MakeDumbNoMore(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_MakeDumbNoMore /* 65 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

MakeDumbNoMore::MakeDumbNoMore(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_MakeDumbNoMore /* 65 */), UserName(UserName_) {
}

void MakeDumbNoMore::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_MakeDumbNoMore); /* PacketID: 65 */
    buffer->WriteUnicodeString(UserName);

}

void MakeDumbNoMore::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleMakeDumbNoMore(this);
}

DumpIPTables::DumpIPTables() : ClientGMPacket(ClientGMPacketID_DumpIPTables /* 66 */) {
}

DumpIPTables::DumpIPTables(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_DumpIPTables /* 66 */) {
    buffer->ReadByte(); /* PacketID */

}

void DumpIPTables::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_DumpIPTables); /* PacketID: 66 */

}

void DumpIPTables::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleDumpIPTables(this);
}

CouncilKick::CouncilKick() : ClientGMPacket(ClientGMPacketID_CouncilKick /* 67 */), UserName() {
}

CouncilKick::CouncilKick(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_CouncilKick /* 67 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

CouncilKick::CouncilKick(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_CouncilKick /* 67 */), UserName(UserName_) {
}

void CouncilKick::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_CouncilKick); /* PacketID: 67 */
    buffer->WriteUnicodeString(UserName);

}

void CouncilKick::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleCouncilKick(this);
}

SetTrigger::SetTrigger() : ClientGMPacket(ClientGMPacketID_SetTrigger /* 68 */), Trigger() {
}

SetTrigger::SetTrigger(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_SetTrigger /* 68 */) {
    buffer->ReadByte(); /* PacketID */
    Trigger = buffer->ReadByte();

}

SetTrigger::SetTrigger(std::uint8_t Trigger_) : ClientGMPacket(ClientGMPacketID_SetTrigger /* 68 */), Trigger(Trigger_) {
}

void SetTrigger::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_SetTrigger); /* PacketID: 68 */
    buffer->WriteByte(Trigger);

}

void SetTrigger::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSetTrigger(this);
}

AskTrigger::AskTrigger() : ClientGMPacket(ClientGMPacketID_AskTrigger /* 69 */) {
}

AskTrigger::AskTrigger(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_AskTrigger /* 69 */) {
    buffer->ReadByte(); /* PacketID */

}

void AskTrigger::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_AskTrigger); /* PacketID: 69 */

}

void AskTrigger::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleAskTrigger(this);
}

BannedIPList::BannedIPList() : ClientGMPacket(ClientGMPacketID_BannedIPList /* 70 */) {
}

BannedIPList::BannedIPList(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_BannedIPList /* 70 */) {
    buffer->ReadByte(); /* PacketID */

}

void BannedIPList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_BannedIPList); /* PacketID: 70 */

}

void BannedIPList::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleBannedIPList(this);
}

BannedIPReload::BannedIPReload() : ClientGMPacket(ClientGMPacketID_BannedIPReload /* 71 */) {
}

BannedIPReload::BannedIPReload(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_BannedIPReload /* 71 */) {
    buffer->ReadByte(); /* PacketID */

}

void BannedIPReload::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_BannedIPReload); /* PacketID: 71 */

}

void BannedIPReload::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleBannedIPReload(this);
}

GuildMemberList::GuildMemberList() : ClientGMPacket(ClientGMPacketID_GuildMemberList /* 72 */), GuildName() {
}

GuildMemberList::GuildMemberList(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_GuildMemberList /* 72 */) {
    buffer->ReadByte(); /* PacketID */
    GuildName = buffer->ReadUnicodeString();

}

GuildMemberList::GuildMemberList(const std::string& GuildName_) : ClientGMPacket(ClientGMPacketID_GuildMemberList /* 72 */), GuildName(GuildName_) {
}

void GuildMemberList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_GuildMemberList); /* PacketID: 72 */
    buffer->WriteUnicodeString(GuildName);

}

void GuildMemberList::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleGuildMemberList(this);
}

GuildBan::GuildBan() : ClientGMPacket(ClientGMPacketID_GuildBan /* 73 */), GuildName() {
}

GuildBan::GuildBan(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_GuildBan /* 73 */) {
    buffer->ReadByte(); /* PacketID */
    GuildName = buffer->ReadUnicodeString();

}

GuildBan::GuildBan(const std::string& GuildName_) : ClientGMPacket(ClientGMPacketID_GuildBan /* 73 */), GuildName(GuildName_) {
}

void GuildBan::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_GuildBan); /* PacketID: 73 */
    buffer->WriteUnicodeString(GuildName);

}

void GuildBan::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleGuildBan(this);
}

BanIP::BanIP() : ClientGMPacket(ClientGMPacketID_BanIP /* 74 */), IP(), Reason() {
}

BanIP::BanIP(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_BanIP /* 74 */) {
    buffer->ReadByte(); /* PacketID */
    IP = buffer->ReadUnicodeString();
    Reason = buffer->ReadUnicodeString();

}

BanIP::BanIP(const std::string& IP_, const std::string& Reason_) : ClientGMPacket(ClientGMPacketID_BanIP /* 74 */), IP(IP_), Reason(Reason_) {
}

void BanIP::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_BanIP); /* PacketID: 74 */
    buffer->WriteUnicodeString(IP);
    buffer->WriteUnicodeString(Reason);

}

void BanIP::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleBanIP(this);
}

UnbanIP::UnbanIP() : ClientGMPacket(ClientGMPacketID_UnbanIP /* 75 */), IP() {
}

UnbanIP::UnbanIP(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_UnbanIP /* 75 */) {
    buffer->ReadByte(); /* PacketID */
    IP = buffer->ReadUnicodeString();

}

UnbanIP::UnbanIP(const std::string& IP_) : ClientGMPacket(ClientGMPacketID_UnbanIP /* 75 */), IP(IP_) {
}

void UnbanIP::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_UnbanIP); /* PacketID: 75 */
    buffer->WriteUnicodeString(IP);

}

void UnbanIP::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleUnbanIP(this);
}

CreateItem::CreateItem() : ClientGMPacket(ClientGMPacketID_CreateItem /* 76 */), Item() {
}

CreateItem::CreateItem(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_CreateItem /* 76 */) {
    buffer->ReadByte(); /* PacketID */
    Item = buffer->ReadInteger();

}

CreateItem::CreateItem(std::int16_t Item_) : ClientGMPacket(ClientGMPacketID_CreateItem /* 76 */), Item(Item_) {
}

void CreateItem::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_CreateItem); /* PacketID: 76 */
    buffer->WriteInteger(Item);

}

void CreateItem::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleCreateItem(this);
}

DestroyItems::DestroyItems() : ClientGMPacket(ClientGMPacketID_DestroyItems /* 77 */) {
}

DestroyItems::DestroyItems(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_DestroyItems /* 77 */) {
    buffer->ReadByte(); /* PacketID */

}

void DestroyItems::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_DestroyItems); /* PacketID: 77 */

}

void DestroyItems::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleDestroyItems(this);
}

ChaosLegionKick::ChaosLegionKick() : ClientGMPacket(ClientGMPacketID_ChaosLegionKick /* 78 */), UserName(), Reason() {
}

ChaosLegionKick::ChaosLegionKick(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChaosLegionKick /* 78 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    Reason = buffer->ReadUnicodeString();

}

ChaosLegionKick::ChaosLegionKick(const std::string& UserName_, const std::string& Reason_) : ClientGMPacket(ClientGMPacketID_ChaosLegionKick /* 78 */), UserName(UserName_), Reason(Reason_) {
}

void ChaosLegionKick::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChaosLegionKick); /* PacketID: 78 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteUnicodeString(Reason);

}

void ChaosLegionKick::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChaosLegionKick(this);
}

RoyalArmyKick::RoyalArmyKick() : ClientGMPacket(ClientGMPacketID_RoyalArmyKick /* 79 */), UserName(), Reason() {
}

RoyalArmyKick::RoyalArmyKick(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RoyalArmyKick /* 79 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    Reason = buffer->ReadUnicodeString();

}

RoyalArmyKick::RoyalArmyKick(const std::string& UserName_, const std::string& Reason_) : ClientGMPacket(ClientGMPacketID_RoyalArmyKick /* 79 */), UserName(UserName_), Reason(Reason_) {
}

void RoyalArmyKick::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RoyalArmyKick); /* PacketID: 79 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteUnicodeString(Reason);

}

void RoyalArmyKick::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRoyalArmyKick(this);
}

ForceMIDIAll::ForceMIDIAll() : ClientGMPacket(ClientGMPacketID_ForceMIDIAll /* 80 */), MidiID() {
}

ForceMIDIAll::ForceMIDIAll(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ForceMIDIAll /* 80 */) {
    buffer->ReadByte(); /* PacketID */
    MidiID = buffer->ReadByte();

}

ForceMIDIAll::ForceMIDIAll(std::uint8_t MidiID_) : ClientGMPacket(ClientGMPacketID_ForceMIDIAll /* 80 */), MidiID(MidiID_) {
}

void ForceMIDIAll::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ForceMIDIAll); /* PacketID: 80 */
    buffer->WriteByte(MidiID);

}

void ForceMIDIAll::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleForceMIDIAll(this);
}

ForceWAVEAll::ForceWAVEAll() : ClientGMPacket(ClientGMPacketID_ForceWAVEAll /* 81 */), WaveID() {
}

ForceWAVEAll::ForceWAVEAll(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ForceWAVEAll /* 81 */) {
    buffer->ReadByte(); /* PacketID */
    WaveID = buffer->ReadByte();

}

ForceWAVEAll::ForceWAVEAll(std::uint8_t WaveID_) : ClientGMPacket(ClientGMPacketID_ForceWAVEAll /* 81 */), WaveID(WaveID_) {
}

void ForceWAVEAll::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ForceWAVEAll); /* PacketID: 81 */
    buffer->WriteByte(WaveID);

}

void ForceWAVEAll::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleForceWAVEAll(this);
}

RemovePunishment::RemovePunishment() : ClientGMPacket(ClientGMPacketID_RemovePunishment /* 82 */), UserName(), Punishment(), NewText() {
}

RemovePunishment::RemovePunishment(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RemovePunishment /* 82 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    Punishment = buffer->ReadByte();
    NewText = buffer->ReadUnicodeString();

}

RemovePunishment::RemovePunishment(const std::string& UserName_, std::uint8_t Punishment_, const std::string& NewText_) : ClientGMPacket(ClientGMPacketID_RemovePunishment /* 82 */), UserName(UserName_), Punishment(Punishment_), NewText(NewText_) {
}

void RemovePunishment::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RemovePunishment); /* PacketID: 82 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteByte(Punishment);
    buffer->WriteUnicodeString(NewText);

}

void RemovePunishment::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRemovePunishment(this);
}

TileBlockedToggle::TileBlockedToggle() : ClientGMPacket(ClientGMPacketID_TileBlockedToggle /* 83 */) {
}

TileBlockedToggle::TileBlockedToggle(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_TileBlockedToggle /* 83 */) {
    buffer->ReadByte(); /* PacketID */

}

void TileBlockedToggle::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_TileBlockedToggle); /* PacketID: 83 */

}

void TileBlockedToggle::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleTileBlockedToggle(this);
}

KillNPCNoRespawn::KillNPCNoRespawn() : ClientGMPacket(ClientGMPacketID_KillNPCNoRespawn /* 84 */) {
}

KillNPCNoRespawn::KillNPCNoRespawn(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_KillNPCNoRespawn /* 84 */) {
    buffer->ReadByte(); /* PacketID */

}

void KillNPCNoRespawn::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_KillNPCNoRespawn); /* PacketID: 84 */

}

void KillNPCNoRespawn::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleKillNPCNoRespawn(this);
}

KillAllNearbyNPCs::KillAllNearbyNPCs() : ClientGMPacket(ClientGMPacketID_KillAllNearbyNPCs /* 85 */) {
}

KillAllNearbyNPCs::KillAllNearbyNPCs(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_KillAllNearbyNPCs /* 85 */) {
    buffer->ReadByte(); /* PacketID */

}

void KillAllNearbyNPCs::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_KillAllNearbyNPCs); /* PacketID: 85 */

}

void KillAllNearbyNPCs::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleKillAllNearbyNPCs(this);
}

LastIP::LastIP() : ClientGMPacket(ClientGMPacketID_LastIP /* 86 */), UserName() {
}

LastIP::LastIP(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_LastIP /* 86 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

LastIP::LastIP(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_LastIP /* 86 */), UserName(UserName_) {
}

void LastIP::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_LastIP); /* PacketID: 86 */
    buffer->WriteUnicodeString(UserName);

}

void LastIP::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleLastIP(this);
}

ChangeMOTD::ChangeMOTD() : ClientGMPacket(ClientGMPacketID_ChangeMOTD /* 87 */) {
}

ChangeMOTD::ChangeMOTD(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChangeMOTD /* 87 */) {
    buffer->ReadByte(); /* PacketID */

}

void ChangeMOTD::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChangeMOTD); /* PacketID: 87 */

}

void ChangeMOTD::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChangeMOTD(this);
}

SetMOTD::SetMOTD() : ClientGMPacket(ClientGMPacketID_SetMOTD /* 88 */), Motd() {
}

SetMOTD::SetMOTD(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_SetMOTD /* 88 */) {
    buffer->ReadByte(); /* PacketID */
    Motd = buffer->ReadUnicodeString();

}

SetMOTD::SetMOTD(const std::string& Motd_) : ClientGMPacket(ClientGMPacketID_SetMOTD /* 88 */), Motd(Motd_) {
}

void SetMOTD::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_SetMOTD); /* PacketID: 88 */
    buffer->WriteUnicodeString(Motd);

}

void SetMOTD::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSetMOTD(this);
}

SystemMessage::SystemMessage() : ClientGMPacket(ClientGMPacketID_SystemMessage /* 89 */), Message() {
}

SystemMessage::SystemMessage(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_SystemMessage /* 89 */) {
    buffer->ReadByte(); /* PacketID */
    Message = buffer->ReadUnicodeString();

}

SystemMessage::SystemMessage(const std::string& Message_) : ClientGMPacket(ClientGMPacketID_SystemMessage /* 89 */), Message(Message_) {
}

void SystemMessage::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_SystemMessage); /* PacketID: 89 */
    buffer->WriteUnicodeString(Message);

}

void SystemMessage::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSystemMessage(this);
}

CreateNPC::CreateNPC() : ClientGMPacket(ClientGMPacketID_CreateNPC /* 90 */), NpcIndex() {
}

CreateNPC::CreateNPC(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_CreateNPC /* 90 */) {
    buffer->ReadByte(); /* PacketID */
    NpcIndex = buffer->ReadInteger();

}

CreateNPC::CreateNPC(std::int16_t NpcIndex_) : ClientGMPacket(ClientGMPacketID_CreateNPC /* 90 */), NpcIndex(NpcIndex_) {
}

void CreateNPC::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_CreateNPC); /* PacketID: 90 */
    buffer->WriteInteger(NpcIndex);

}

void CreateNPC::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleCreateNPC(this);
}

CreateNPCWithRespawn::CreateNPCWithRespawn() : ClientGMPacket(ClientGMPacketID_CreateNPCWithRespawn /* 91 */), NpcIndex() {
}

CreateNPCWithRespawn::CreateNPCWithRespawn(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_CreateNPCWithRespawn /* 91 */) {
    buffer->ReadByte(); /* PacketID */
    NpcIndex = buffer->ReadInteger();

}

CreateNPCWithRespawn::CreateNPCWithRespawn(std::int16_t NpcIndex_) : ClientGMPacket(ClientGMPacketID_CreateNPCWithRespawn /* 91 */), NpcIndex(NpcIndex_) {
}

void CreateNPCWithRespawn::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_CreateNPCWithRespawn); /* PacketID: 91 */
    buffer->WriteInteger(NpcIndex);

}

void CreateNPCWithRespawn::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleCreateNPCWithRespawn(this);
}

ImperialArmour::ImperialArmour() : ClientGMPacket(ClientGMPacketID_ImperialArmour /* 92 */), Index(), ObjIndex() {
}

ImperialArmour::ImperialArmour(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ImperialArmour /* 92 */) {
    buffer->ReadByte(); /* PacketID */
    Index = buffer->ReadByte();
    ObjIndex = buffer->ReadInteger();

}

ImperialArmour::ImperialArmour(std::uint8_t Index_, std::int16_t ObjIndex_) : ClientGMPacket(ClientGMPacketID_ImperialArmour /* 92 */), Index(Index_), ObjIndex(ObjIndex_) {
}

void ImperialArmour::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ImperialArmour); /* PacketID: 92 */
    buffer->WriteByte(Index);
    buffer->WriteInteger(ObjIndex);

}

void ImperialArmour::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleImperialArmour(this);
}

ChaosArmour::ChaosArmour() : ClientGMPacket(ClientGMPacketID_ChaosArmour /* 93 */), Index(), ObjIndex() {
}

ChaosArmour::ChaosArmour(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChaosArmour /* 93 */) {
    buffer->ReadByte(); /* PacketID */
    Index = buffer->ReadByte();
    ObjIndex = buffer->ReadInteger();

}

ChaosArmour::ChaosArmour(std::uint8_t Index_, std::int16_t ObjIndex_) : ClientGMPacket(ClientGMPacketID_ChaosArmour /* 93 */), Index(Index_), ObjIndex(ObjIndex_) {
}

void ChaosArmour::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChaosArmour); /* PacketID: 93 */
    buffer->WriteByte(Index);
    buffer->WriteInteger(ObjIndex);

}

void ChaosArmour::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChaosArmour(this);
}

NavigateToggle::NavigateToggle() : ClientGMPacket(ClientGMPacketID_NavigateToggle /* 94 */) {
}

NavigateToggle::NavigateToggle(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_NavigateToggle /* 94 */) {
    buffer->ReadByte(); /* PacketID */

}

void NavigateToggle::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_NavigateToggle); /* PacketID: 94 */

}

void NavigateToggle::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleNavigateToggle(this);
}

ServerOpenToUsersToggle::ServerOpenToUsersToggle() : ClientGMPacket(ClientGMPacketID_ServerOpenToUsersToggle /* 95 */) {
}

ServerOpenToUsersToggle::ServerOpenToUsersToggle(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ServerOpenToUsersToggle /* 95 */) {
    buffer->ReadByte(); /* PacketID */

}

void ServerOpenToUsersToggle::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ServerOpenToUsersToggle); /* PacketID: 95 */

}

void ServerOpenToUsersToggle::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleServerOpenToUsersToggle(this);
}

TurnOffServer::TurnOffServer() : ClientGMPacket(ClientGMPacketID_TurnOffServer /* 96 */) {
}

TurnOffServer::TurnOffServer(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_TurnOffServer /* 96 */) {
    buffer->ReadByte(); /* PacketID */

}

void TurnOffServer::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_TurnOffServer); /* PacketID: 96 */

}

void TurnOffServer::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleTurnOffServer(this);
}

TurnCriminal::TurnCriminal() : ClientGMPacket(ClientGMPacketID_TurnCriminal /* 97 */), UserName() {
}

TurnCriminal::TurnCriminal(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_TurnCriminal /* 97 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

TurnCriminal::TurnCriminal(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_TurnCriminal /* 97 */), UserName(UserName_) {
}

void TurnCriminal::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_TurnCriminal); /* PacketID: 97 */
    buffer->WriteUnicodeString(UserName);

}

void TurnCriminal::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleTurnCriminal(this);
}

ResetFactions::ResetFactions() : ClientGMPacket(ClientGMPacketID_ResetFactions /* 98 */), UserName() {
}

ResetFactions::ResetFactions(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ResetFactions /* 98 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

ResetFactions::ResetFactions(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_ResetFactions /* 98 */), UserName(UserName_) {
}

void ResetFactions::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ResetFactions); /* PacketID: 98 */
    buffer->WriteUnicodeString(UserName);

}

void ResetFactions::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleResetFactions(this);
}

RemoveCharFromGuild::RemoveCharFromGuild() : ClientGMPacket(ClientGMPacketID_RemoveCharFromGuild /* 99 */), UserName() {
}

RemoveCharFromGuild::RemoveCharFromGuild(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RemoveCharFromGuild /* 99 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

RemoveCharFromGuild::RemoveCharFromGuild(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_RemoveCharFromGuild /* 99 */), UserName(UserName_) {
}

void RemoveCharFromGuild::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RemoveCharFromGuild); /* PacketID: 99 */
    buffer->WriteUnicodeString(UserName);

}

void RemoveCharFromGuild::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRemoveCharFromGuild(this);
}

RequestCharMail::RequestCharMail() : ClientGMPacket(ClientGMPacketID_RequestCharMail /* 100 */), UserName() {
}

RequestCharMail::RequestCharMail(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RequestCharMail /* 100 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();

}

RequestCharMail::RequestCharMail(const std::string& UserName_) : ClientGMPacket(ClientGMPacketID_RequestCharMail /* 100 */), UserName(UserName_) {
}

void RequestCharMail::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RequestCharMail); /* PacketID: 100 */
    buffer->WriteUnicodeString(UserName);

}

void RequestCharMail::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRequestCharMail(this);
}

AlterPassword::AlterPassword() : ClientGMPacket(ClientGMPacketID_AlterPassword /* 101 */), UserName(), CopyFrom() {
}

AlterPassword::AlterPassword(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_AlterPassword /* 101 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    CopyFrom = buffer->ReadUnicodeString();

}

AlterPassword::AlterPassword(const std::string& UserName_, const std::string& CopyFrom_) : ClientGMPacket(ClientGMPacketID_AlterPassword /* 101 */), UserName(UserName_), CopyFrom(CopyFrom_) {
}

void AlterPassword::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_AlterPassword); /* PacketID: 101 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteUnicodeString(CopyFrom);

}

void AlterPassword::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleAlterPassword(this);
}

AlterMail::AlterMail() : ClientGMPacket(ClientGMPacketID_AlterMail /* 102 */), UserName(), NewMail() {
}

AlterMail::AlterMail(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_AlterMail /* 102 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    NewMail = buffer->ReadUnicodeString();

}

AlterMail::AlterMail(const std::string& UserName_, const std::string& NewMail_) : ClientGMPacket(ClientGMPacketID_AlterMail /* 102 */), UserName(UserName_), NewMail(NewMail_) {
}

void AlterMail::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_AlterMail); /* PacketID: 102 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteUnicodeString(NewMail);

}

void AlterMail::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleAlterMail(this);
}

AlterName::AlterName() : ClientGMPacket(ClientGMPacketID_AlterName /* 103 */), UserName(), NewName() {
}

AlterName::AlterName(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_AlterName /* 103 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    NewName = buffer->ReadUnicodeString();

}

AlterName::AlterName(const std::string& UserName_, const std::string& NewName_) : ClientGMPacket(ClientGMPacketID_AlterName /* 103 */), UserName(UserName_), NewName(NewName_) {
}

void AlterName::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_AlterName); /* PacketID: 103 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteUnicodeString(NewName);

}

void AlterName::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleAlterName(this);
}

ToggleCentinelActivated::ToggleCentinelActivated() : ClientGMPacket(ClientGMPacketID_ToggleCentinelActivated /* 104 */) {
}

ToggleCentinelActivated::ToggleCentinelActivated(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ToggleCentinelActivated /* 104 */) {
    buffer->ReadByte(); /* PacketID */

}

void ToggleCentinelActivated::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ToggleCentinelActivated); /* PacketID: 104 */

}

void ToggleCentinelActivated::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleToggleCentinelActivated(this);
}

DoBackUp::DoBackUp() : ClientGMPacket(ClientGMPacketID_DoBackUp /* 105 */) {
}

DoBackUp::DoBackUp(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_DoBackUp /* 105 */) {
    buffer->ReadByte(); /* PacketID */

}

void DoBackUp::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_DoBackUp); /* PacketID: 105 */

}

void DoBackUp::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleDoBackUp(this);
}

ShowGuildMessages::ShowGuildMessages() : ClientGMPacket(ClientGMPacketID_ShowGuildMessages /* 106 */), GuildName() {
}

ShowGuildMessages::ShowGuildMessages(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ShowGuildMessages /* 106 */) {
    buffer->ReadByte(); /* PacketID */
    GuildName = buffer->ReadUnicodeString();

}

ShowGuildMessages::ShowGuildMessages(const std::string& GuildName_) : ClientGMPacket(ClientGMPacketID_ShowGuildMessages /* 106 */), GuildName(GuildName_) {
}

void ShowGuildMessages::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ShowGuildMessages); /* PacketID: 106 */
    buffer->WriteUnicodeString(GuildName);

}

void ShowGuildMessages::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleShowGuildMessages(this);
}

SaveMap::SaveMap() : ClientGMPacket(ClientGMPacketID_SaveMap /* 107 */) {
}

SaveMap::SaveMap(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_SaveMap /* 107 */) {
    buffer->ReadByte(); /* PacketID */

}

void SaveMap::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_SaveMap); /* PacketID: 107 */

}

void SaveMap::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSaveMap(this);
}

ChangeMapInfoPK::ChangeMapInfoPK() : ClientGMPacket(ClientGMPacketID_ChangeMapInfoPK /* 108 */), Pk() {
}

ChangeMapInfoPK::ChangeMapInfoPK(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoPK /* 108 */) {
    buffer->ReadByte(); /* PacketID */
    Pk = buffer->ReadBoolean();

}

ChangeMapInfoPK::ChangeMapInfoPK(bool Pk_) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoPK /* 108 */), Pk(Pk_) {
}

void ChangeMapInfoPK::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChangeMapInfoPK); /* PacketID: 108 */
    buffer->WriteBoolean(Pk);

}

void ChangeMapInfoPK::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChangeMapInfoPK(this);
}

ChangeMapInfoBackup::ChangeMapInfoBackup() : ClientGMPacket(ClientGMPacketID_ChangeMapInfoBackup /* 109 */), Backup() {
}

ChangeMapInfoBackup::ChangeMapInfoBackup(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoBackup /* 109 */) {
    buffer->ReadByte(); /* PacketID */
    Backup = buffer->ReadBoolean();

}

ChangeMapInfoBackup::ChangeMapInfoBackup(bool Backup_) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoBackup /* 109 */), Backup(Backup_) {
}

void ChangeMapInfoBackup::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChangeMapInfoBackup); /* PacketID: 109 */
    buffer->WriteBoolean(Backup);

}

void ChangeMapInfoBackup::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChangeMapInfoBackup(this);
}

ChangeMapInfoRestricted::ChangeMapInfoRestricted() : ClientGMPacket(ClientGMPacketID_ChangeMapInfoRestricted /* 110 */), RestrictedTo() {
}

ChangeMapInfoRestricted::ChangeMapInfoRestricted(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoRestricted /* 110 */) {
    buffer->ReadByte(); /* PacketID */
    RestrictedTo = buffer->ReadUnicodeString();

}

ChangeMapInfoRestricted::ChangeMapInfoRestricted(const std::string& RestrictedTo_) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoRestricted /* 110 */), RestrictedTo(RestrictedTo_) {
}

void ChangeMapInfoRestricted::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChangeMapInfoRestricted); /* PacketID: 110 */
    buffer->WriteUnicodeString(RestrictedTo);

}

void ChangeMapInfoRestricted::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChangeMapInfoRestricted(this);
}

ChangeMapInfoNoMagic::ChangeMapInfoNoMagic() : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoMagic /* 111 */), NoMagic() {
}

ChangeMapInfoNoMagic::ChangeMapInfoNoMagic(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoMagic /* 111 */) {
    buffer->ReadByte(); /* PacketID */
    NoMagic = buffer->ReadBoolean();

}

ChangeMapInfoNoMagic::ChangeMapInfoNoMagic(bool NoMagic_) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoMagic /* 111 */), NoMagic(NoMagic_) {
}

void ChangeMapInfoNoMagic::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChangeMapInfoNoMagic); /* PacketID: 111 */
    buffer->WriteBoolean(NoMagic);

}

void ChangeMapInfoNoMagic::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChangeMapInfoNoMagic(this);
}

ChangeMapInfoNoInvi::ChangeMapInfoNoInvi() : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoInvi /* 112 */), NoInvi() {
}

ChangeMapInfoNoInvi::ChangeMapInfoNoInvi(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoInvi /* 112 */) {
    buffer->ReadByte(); /* PacketID */
    NoInvi = buffer->ReadBoolean();

}

ChangeMapInfoNoInvi::ChangeMapInfoNoInvi(bool NoInvi_) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoInvi /* 112 */), NoInvi(NoInvi_) {
}

void ChangeMapInfoNoInvi::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChangeMapInfoNoInvi); /* PacketID: 112 */
    buffer->WriteBoolean(NoInvi);

}

void ChangeMapInfoNoInvi::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChangeMapInfoNoInvi(this);
}

ChangeMapInfoNoResu::ChangeMapInfoNoResu() : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoResu /* 113 */), NoResu() {
}

ChangeMapInfoNoResu::ChangeMapInfoNoResu(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoResu /* 113 */) {
    buffer->ReadByte(); /* PacketID */
    NoResu = buffer->ReadBoolean();

}

ChangeMapInfoNoResu::ChangeMapInfoNoResu(bool NoResu_) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoResu /* 113 */), NoResu(NoResu_) {
}

void ChangeMapInfoNoResu::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChangeMapInfoNoResu); /* PacketID: 113 */
    buffer->WriteBoolean(NoResu);

}

void ChangeMapInfoNoResu::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChangeMapInfoNoResu(this);
}

ChangeMapInfoLand::ChangeMapInfoLand() : ClientGMPacket(ClientGMPacketID_ChangeMapInfoLand /* 114 */), Data() {
}

ChangeMapInfoLand::ChangeMapInfoLand(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoLand /* 114 */) {
    buffer->ReadByte(); /* PacketID */
    Data = buffer->ReadUnicodeString();

}

ChangeMapInfoLand::ChangeMapInfoLand(const std::string& Data_) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoLand /* 114 */), Data(Data_) {
}

void ChangeMapInfoLand::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChangeMapInfoLand); /* PacketID: 114 */
    buffer->WriteUnicodeString(Data);

}

void ChangeMapInfoLand::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChangeMapInfoLand(this);
}

ChangeMapInfoZone::ChangeMapInfoZone() : ClientGMPacket(ClientGMPacketID_ChangeMapInfoZone /* 115 */), Data() {
}

ChangeMapInfoZone::ChangeMapInfoZone(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoZone /* 115 */) {
    buffer->ReadByte(); /* PacketID */
    Data = buffer->ReadUnicodeString();

}

ChangeMapInfoZone::ChangeMapInfoZone(const std::string& Data_) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoZone /* 115 */), Data(Data_) {
}

void ChangeMapInfoZone::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChangeMapInfoZone); /* PacketID: 115 */
    buffer->WriteUnicodeString(Data);

}

void ChangeMapInfoZone::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChangeMapInfoZone(this);
}

ChangeMapInfoStealNpc::ChangeMapInfoStealNpc() : ClientGMPacket(ClientGMPacketID_ChangeMapInfoStealNpc /* 116 */), RoboNpc() {
}

ChangeMapInfoStealNpc::ChangeMapInfoStealNpc(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoStealNpc /* 116 */) {
    buffer->ReadByte(); /* PacketID */
    RoboNpc = buffer->ReadBoolean();

}

ChangeMapInfoStealNpc::ChangeMapInfoStealNpc(bool RoboNpc_) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoStealNpc /* 116 */), RoboNpc(RoboNpc_) {
}

void ChangeMapInfoStealNpc::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChangeMapInfoStealNpc); /* PacketID: 116 */
    buffer->WriteBoolean(RoboNpc);

}

void ChangeMapInfoStealNpc::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChangeMapInfoStealNpc(this);
}

ChangeMapInfoNoOcultar::ChangeMapInfoNoOcultar() : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoOcultar /* 117 */), NoOcultar() {
}

ChangeMapInfoNoOcultar::ChangeMapInfoNoOcultar(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoOcultar /* 117 */) {
    buffer->ReadByte(); /* PacketID */
    NoOcultar = buffer->ReadBoolean();

}

ChangeMapInfoNoOcultar::ChangeMapInfoNoOcultar(bool NoOcultar_) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoOcultar /* 117 */), NoOcultar(NoOcultar_) {
}

void ChangeMapInfoNoOcultar::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChangeMapInfoNoOcultar); /* PacketID: 117 */
    buffer->WriteBoolean(NoOcultar);

}

void ChangeMapInfoNoOcultar::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChangeMapInfoNoOcultar(this);
}

ChangeMapInfoNoInvocar::ChangeMapInfoNoInvocar() : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoInvocar /* 118 */), NoInvocar() {
}

ChangeMapInfoNoInvocar::ChangeMapInfoNoInvocar(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoInvocar /* 118 */) {
    buffer->ReadByte(); /* PacketID */
    NoInvocar = buffer->ReadBoolean();

}

ChangeMapInfoNoInvocar::ChangeMapInfoNoInvocar(bool NoInvocar_) : ClientGMPacket(ClientGMPacketID_ChangeMapInfoNoInvocar /* 118 */), NoInvocar(NoInvocar_) {
}

void ChangeMapInfoNoInvocar::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChangeMapInfoNoInvocar); /* PacketID: 118 */
    buffer->WriteBoolean(NoInvocar);

}

void ChangeMapInfoNoInvocar::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChangeMapInfoNoInvocar(this);
}

SaveChars::SaveChars() : ClientGMPacket(ClientGMPacketID_SaveChars /* 119 */) {
}

SaveChars::SaveChars(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_SaveChars /* 119 */) {
    buffer->ReadByte(); /* PacketID */

}

void SaveChars::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_SaveChars); /* PacketID: 119 */

}

void SaveChars::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSaveChars(this);
}

CleanSOS::CleanSOS() : ClientGMPacket(ClientGMPacketID_CleanSOS /* 120 */) {
}

CleanSOS::CleanSOS(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_CleanSOS /* 120 */) {
    buffer->ReadByte(); /* PacketID */

}

void CleanSOS::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_CleanSOS); /* PacketID: 120 */

}

void CleanSOS::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleCleanSOS(this);
}

ShowServerForm::ShowServerForm() : ClientGMPacket(ClientGMPacketID_ShowServerForm /* 121 */) {
}

ShowServerForm::ShowServerForm(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ShowServerForm /* 121 */) {
    buffer->ReadByte(); /* PacketID */

}

void ShowServerForm::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ShowServerForm); /* PacketID: 121 */

}

void ShowServerForm::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleShowServerForm(this);
}

Night::Night() : ClientGMPacket(ClientGMPacketID_Night /* 122 */) {
}

Night::Night(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Night /* 122 */) {
    buffer->ReadByte(); /* PacketID */

}

void Night::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Night); /* PacketID: 122 */

}

void Night::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleNight(this);
}

KickAllChars::KickAllChars() : ClientGMPacket(ClientGMPacketID_KickAllChars /* 123 */) {
}

KickAllChars::KickAllChars(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_KickAllChars /* 123 */) {
    buffer->ReadByte(); /* PacketID */

}

void KickAllChars::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_KickAllChars); /* PacketID: 123 */

}

void KickAllChars::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleKickAllChars(this);
}

ReloadNPCs::ReloadNPCs() : ClientGMPacket(ClientGMPacketID_ReloadNPCs /* 124 */) {
}

ReloadNPCs::ReloadNPCs(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ReloadNPCs /* 124 */) {
    buffer->ReadByte(); /* PacketID */

}

void ReloadNPCs::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ReloadNPCs); /* PacketID: 124 */

}

void ReloadNPCs::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleReloadNPCs(this);
}

ReloadServerIni::ReloadServerIni() : ClientGMPacket(ClientGMPacketID_ReloadServerIni /* 125 */) {
}

ReloadServerIni::ReloadServerIni(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ReloadServerIni /* 125 */) {
    buffer->ReadByte(); /* PacketID */

}

void ReloadServerIni::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ReloadServerIni); /* PacketID: 125 */

}

void ReloadServerIni::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleReloadServerIni(this);
}

ReloadSpells::ReloadSpells() : ClientGMPacket(ClientGMPacketID_ReloadSpells /* 126 */) {
}

ReloadSpells::ReloadSpells(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ReloadSpells /* 126 */) {
    buffer->ReadByte(); /* PacketID */

}

void ReloadSpells::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ReloadSpells); /* PacketID: 126 */

}

void ReloadSpells::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleReloadSpells(this);
}

ReloadObjects::ReloadObjects() : ClientGMPacket(ClientGMPacketID_ReloadObjects /* 127 */) {
}

ReloadObjects::ReloadObjects(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ReloadObjects /* 127 */) {
    buffer->ReadByte(); /* PacketID */

}

void ReloadObjects::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ReloadObjects); /* PacketID: 127 */

}

void ReloadObjects::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleReloadObjects(this);
}

Restart::Restart() : ClientGMPacket(ClientGMPacketID_Restart /* 128 */) {
}

Restart::Restart(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Restart /* 128 */) {
    buffer->ReadByte(); /* PacketID */

}

void Restart::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Restart); /* PacketID: 128 */

}

void Restart::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRestart(this);
}

ResetAutoUpdate::ResetAutoUpdate() : ClientGMPacket(ClientGMPacketID_ResetAutoUpdate /* 129 */) {
}

ResetAutoUpdate::ResetAutoUpdate(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ResetAutoUpdate /* 129 */) {
    buffer->ReadByte(); /* PacketID */

}

void ResetAutoUpdate::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ResetAutoUpdate); /* PacketID: 129 */

}

void ResetAutoUpdate::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleResetAutoUpdate(this);
}

ChatColor::ChatColor() : ClientGMPacket(ClientGMPacketID_ChatColor /* 130 */), R(), G(), B() {
}

ChatColor::ChatColor(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ChatColor /* 130 */) {
    buffer->ReadByte(); /* PacketID */
    R = buffer->ReadByte();
    G = buffer->ReadByte();
    B = buffer->ReadByte();

}

ChatColor::ChatColor(std::uint8_t R_, std::uint8_t G_, std::uint8_t B_) : ClientGMPacket(ClientGMPacketID_ChatColor /* 130 */), R(R_), G(G_), B(B_) {
}

void ChatColor::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ChatColor); /* PacketID: 130 */
    buffer->WriteByte(R);
    buffer->WriteByte(G);
    buffer->WriteByte(B);

}

void ChatColor::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleChatColor(this);
}

Ignored::Ignored() : ClientGMPacket(ClientGMPacketID_Ignored /* 131 */) {
}

Ignored::Ignored(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Ignored /* 131 */) {
    buffer->ReadByte(); /* PacketID */

}

void Ignored::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Ignored); /* PacketID: 131 */

}

void Ignored::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleIgnored(this);
}

CheckSlot::CheckSlot() : ClientGMPacket(ClientGMPacketID_CheckSlot /* 132 */), UserName(), Slot() {
}

CheckSlot::CheckSlot(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_CheckSlot /* 132 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    Slot = buffer->ReadByte();

}

CheckSlot::CheckSlot(const std::string& UserName_, std::uint8_t Slot_) : ClientGMPacket(ClientGMPacketID_CheckSlot /* 132 */), UserName(UserName_), Slot(Slot_) {
}

void CheckSlot::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_CheckSlot); /* PacketID: 132 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteByte(Slot);

}

void CheckSlot::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleCheckSlot(this);
}

SetIniVar::SetIniVar() : ClientGMPacket(ClientGMPacketID_SetIniVar /* 133 */), Seccion(), Clave(), Valor() {
}

SetIniVar::SetIniVar(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_SetIniVar /* 133 */) {
    buffer->ReadByte(); /* PacketID */
    Seccion = buffer->ReadUnicodeString();
    Clave = buffer->ReadUnicodeString();
    Valor = buffer->ReadUnicodeString();

}

SetIniVar::SetIniVar(const std::string& Seccion_, const std::string& Clave_, const std::string& Valor_) : ClientGMPacket(ClientGMPacketID_SetIniVar /* 133 */), Seccion(Seccion_), Clave(Clave_), Valor(Valor_) {
}

void SetIniVar::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_SetIniVar); /* PacketID: 133 */
    buffer->WriteUnicodeString(Seccion);
    buffer->WriteUnicodeString(Clave);
    buffer->WriteUnicodeString(Valor);

}

void SetIniVar::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSetIniVar(this);
}

CreatePretorianClan::CreatePretorianClan() : ClientGMPacket(ClientGMPacketID_CreatePretorianClan /* 134 */), Map(), X(), Y() {
}

CreatePretorianClan::CreatePretorianClan(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_CreatePretorianClan /* 134 */) {
    buffer->ReadByte(); /* PacketID */
    Map = buffer->ReadInteger();
    X = buffer->ReadByte();
    Y = buffer->ReadByte();

}

CreatePretorianClan::CreatePretorianClan(std::int16_t Map_, std::uint8_t X_, std::uint8_t Y_) : ClientGMPacket(ClientGMPacketID_CreatePretorianClan /* 134 */), Map(Map_), X(X_), Y(Y_) {
}

void CreatePretorianClan::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_CreatePretorianClan); /* PacketID: 134 */
    buffer->WriteInteger(Map);
    buffer->WriteByte(X);
    buffer->WriteByte(Y);

}

void CreatePretorianClan::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleCreatePretorianClan(this);
}

RemovePretorianClan::RemovePretorianClan() : ClientGMPacket(ClientGMPacketID_RemovePretorianClan /* 135 */), Map() {
}

RemovePretorianClan::RemovePretorianClan(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RemovePretorianClan /* 135 */) {
    buffer->ReadByte(); /* PacketID */
    Map = buffer->ReadInteger();

}

RemovePretorianClan::RemovePretorianClan(std::int16_t Map_) : ClientGMPacket(ClientGMPacketID_RemovePretorianClan /* 135 */), Map(Map_) {
}

void RemovePretorianClan::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RemovePretorianClan); /* PacketID: 135 */
    buffer->WriteInteger(Map);

}

void RemovePretorianClan::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRemovePretorianClan(this);
}

EnableDenounces::EnableDenounces() : ClientGMPacket(ClientGMPacketID_EnableDenounces /* 136 */) {
}

EnableDenounces::EnableDenounces(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_EnableDenounces /* 136 */) {
    buffer->ReadByte(); /* PacketID */

}

void EnableDenounces::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_EnableDenounces); /* PacketID: 136 */

}

void EnableDenounces::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleEnableDenounces(this);
}

ShowDenouncesList::ShowDenouncesList() : ClientGMPacket(ClientGMPacketID_ShowDenouncesList /* 137 */) {
}

ShowDenouncesList::ShowDenouncesList(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_ShowDenouncesList /* 137 */) {
    buffer->ReadByte(); /* PacketID */

}

void ShowDenouncesList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_ShowDenouncesList); /* PacketID: 137 */

}

void ShowDenouncesList::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleShowDenouncesList(this);
}

MapMessage::MapMessage() : ClientGMPacket(ClientGMPacketID_MapMessage /* 138 */), Message() {
}

MapMessage::MapMessage(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_MapMessage /* 138 */) {
    buffer->ReadByte(); /* PacketID */
    Message = buffer->ReadUnicodeString();

}

MapMessage::MapMessage(const std::string& Message_) : ClientGMPacket(ClientGMPacketID_MapMessage /* 138 */), Message(Message_) {
}

void MapMessage::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_MapMessage); /* PacketID: 138 */
    buffer->WriteUnicodeString(Message);

}

void MapMessage::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleMapMessage(this);
}

SetDialog::SetDialog() : ClientGMPacket(ClientGMPacketID_SetDialog /* 139 */), Message() {
}

SetDialog::SetDialog(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_SetDialog /* 139 */) {
    buffer->ReadByte(); /* PacketID */
    Message = buffer->ReadUnicodeString();

}

SetDialog::SetDialog(const std::string& Message_) : ClientGMPacket(ClientGMPacketID_SetDialog /* 139 */), Message(Message_) {
}

void SetDialog::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_SetDialog); /* PacketID: 139 */
    buffer->WriteUnicodeString(Message);

}

void SetDialog::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleSetDialog(this);
}

Impersonate::Impersonate() : ClientGMPacket(ClientGMPacketID_Impersonate /* 140 */) {
}

Impersonate::Impersonate(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Impersonate /* 140 */) {
    buffer->ReadByte(); /* PacketID */

}

void Impersonate::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Impersonate); /* PacketID: 140 */

}

void Impersonate::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleImpersonate(this);
}

Imitate::Imitate() : ClientGMPacket(ClientGMPacketID_Imitate /* 141 */) {
}

Imitate::Imitate(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_Imitate /* 141 */) {
    buffer->ReadByte(); /* PacketID */

}

void Imitate::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_Imitate); /* PacketID: 141 */

}

void Imitate::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleImitate(this);
}

RecordAdd::RecordAdd() : ClientGMPacket(ClientGMPacketID_RecordAdd /* 142 */), UserName(), Reason() {
}

RecordAdd::RecordAdd(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RecordAdd /* 142 */) {
    buffer->ReadByte(); /* PacketID */
    UserName = buffer->ReadUnicodeString();
    Reason = buffer->ReadUnicodeString();

}

RecordAdd::RecordAdd(const std::string& UserName_, const std::string& Reason_) : ClientGMPacket(ClientGMPacketID_RecordAdd /* 142 */), UserName(UserName_), Reason(Reason_) {
}

void RecordAdd::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RecordAdd); /* PacketID: 142 */
    buffer->WriteUnicodeString(UserName);
    buffer->WriteUnicodeString(Reason);

}

void RecordAdd::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRecordAdd(this);
}

RecordRemove::RecordRemove() : ClientGMPacket(ClientGMPacketID_RecordRemove /* 143 */), Index() {
}

RecordRemove::RecordRemove(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RecordRemove /* 143 */) {
    buffer->ReadByte(); /* PacketID */
    Index = buffer->ReadByte();

}

RecordRemove::RecordRemove(std::uint8_t Index_) : ClientGMPacket(ClientGMPacketID_RecordRemove /* 143 */), Index(Index_) {
}

void RecordRemove::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RecordRemove); /* PacketID: 143 */
    buffer->WriteByte(Index);

}

void RecordRemove::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRecordRemove(this);
}

RecordAddObs::RecordAddObs() : ClientGMPacket(ClientGMPacketID_RecordAddObs /* 144 */), Index(), Obs() {
}

RecordAddObs::RecordAddObs(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RecordAddObs /* 144 */) {
    buffer->ReadByte(); /* PacketID */
    Index = buffer->ReadByte();
    Obs = buffer->ReadUnicodeString();

}

RecordAddObs::RecordAddObs(std::uint8_t Index_, const std::string& Obs_) : ClientGMPacket(ClientGMPacketID_RecordAddObs /* 144 */), Index(Index_), Obs(Obs_) {
}

void RecordAddObs::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RecordAddObs); /* PacketID: 144 */
    buffer->WriteByte(Index);
    buffer->WriteUnicodeString(Obs);

}

void RecordAddObs::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRecordAddObs(this);
}

RecordListRequest::RecordListRequest() : ClientGMPacket(ClientGMPacketID_RecordListRequest /* 145 */) {
}

RecordListRequest::RecordListRequest(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RecordListRequest /* 145 */) {
    buffer->ReadByte(); /* PacketID */

}

void RecordListRequest::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RecordListRequest); /* PacketID: 145 */

}

void RecordListRequest::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRecordListRequest(this);
}

RecordDetailsRequest::RecordDetailsRequest() : ClientGMPacket(ClientGMPacketID_RecordDetailsRequest /* 146 */), Index() {
}

RecordDetailsRequest::RecordDetailsRequest(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_RecordDetailsRequest /* 146 */) {
    buffer->ReadByte(); /* PacketID */
    Index = buffer->ReadByte();

}

RecordDetailsRequest::RecordDetailsRequest(std::uint8_t Index_) : ClientGMPacket(ClientGMPacketID_RecordDetailsRequest /* 146 */), Index(Index_) {
}

void RecordDetailsRequest::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_RecordDetailsRequest); /* PacketID: 146 */
    buffer->WriteByte(Index);

}

void RecordDetailsRequest::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleRecordDetailsRequest(this);
}

AlterGuildName::AlterGuildName() : ClientGMPacket(ClientGMPacketID_AlterGuildName /* 147 */), OldGuildName(), NewGuildName() {
}

AlterGuildName::AlterGuildName(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_AlterGuildName /* 147 */) {
    buffer->ReadByte(); /* PacketID */
    OldGuildName = buffer->ReadUnicodeString();
    NewGuildName = buffer->ReadUnicodeString();

}

AlterGuildName::AlterGuildName(const std::string& OldGuildName_, const std::string& NewGuildName_) : ClientGMPacket(ClientGMPacketID_AlterGuildName /* 147 */), OldGuildName(OldGuildName_), NewGuildName(NewGuildName_) {
}

void AlterGuildName::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_AlterGuildName); /* PacketID: 147 */
    buffer->WriteUnicodeString(OldGuildName);
    buffer->WriteUnicodeString(NewGuildName);

}

void AlterGuildName::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleAlterGuildName(this);
}

HigherAdminsMessage::HigherAdminsMessage() : ClientGMPacket(ClientGMPacketID_HigherAdminsMessage /* 148 */), Message() {
}

HigherAdminsMessage::HigherAdminsMessage(clsByteQueue* buffer) : ClientGMPacket(ClientGMPacketID_HigherAdminsMessage /* 148 */) {
    buffer->ReadByte(); /* PacketID */
    Message = buffer->ReadUnicodeString();

}

HigherAdminsMessage::HigherAdminsMessage(const std::string& Message_) : ClientGMPacket(ClientGMPacketID_HigherAdminsMessage /* 148 */), Message(Message_) {
}

void HigherAdminsMessage::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(dakara::protocol::client::ClientPacketID_GMCommands);
    buffer->WriteByte(ClientGMPacketID_HigherAdminsMessage); /* PacketID: 148 */
    buffer->WriteUnicodeString(Message);

}

void HigherAdminsMessage::dispatch(PacketHandler* d) {
    d->getPacketHandlerClientGMPacket()->handleHigherAdminsMessage(this);
}

ClientGMPacketHandler::~ClientGMPacketHandler() {}

void ClientGMPacketHandler::handleGMMessage(GMMessage* p){ (void)p; }
void ClientGMPacketHandler::handleShowName(ShowName* p){ (void)p; }
void ClientGMPacketHandler::handleOnlineRoyalArmy(OnlineRoyalArmy* p){ (void)p; }
void ClientGMPacketHandler::handleOnlineChaosLegion(OnlineChaosLegion* p){ (void)p; }
void ClientGMPacketHandler::handleGoNearby(GoNearby* p){ (void)p; }
void ClientGMPacketHandler::handleComment(Comment* p){ (void)p; }
void ClientGMPacketHandler::handleServerTime(ServerTime* p){ (void)p; }
void ClientGMPacketHandler::handleWhere(Where* p){ (void)p; }
void ClientGMPacketHandler::handleCreaturesInMap(CreaturesInMap* p){ (void)p; }
void ClientGMPacketHandler::handleWarpMeToTarget(WarpMeToTarget* p){ (void)p; }
void ClientGMPacketHandler::handleWarpChar(WarpChar* p){ (void)p; }
void ClientGMPacketHandler::handleSilence(Silence* p){ (void)p; }
void ClientGMPacketHandler::handleSOSShowList(SOSShowList* p){ (void)p; }
void ClientGMPacketHandler::handleSOSRemove(SOSRemove* p){ (void)p; }
void ClientGMPacketHandler::handleGoToChar(GoToChar* p){ (void)p; }
void ClientGMPacketHandler::handleInvisible(Invisible* p){ (void)p; }
void ClientGMPacketHandler::handleGMPanel(GMPanel* p){ (void)p; }
void ClientGMPacketHandler::handleRequestUserList(RequestUserList* p){ (void)p; }
void ClientGMPacketHandler::handleWorking(Working* p){ (void)p; }
void ClientGMPacketHandler::handleHiding(Hiding* p){ (void)p; }
void ClientGMPacketHandler::handleJail(Jail* p){ (void)p; }
void ClientGMPacketHandler::handleKillNPC(KillNPC* p){ (void)p; }
void ClientGMPacketHandler::handleWarnUser(WarnUser* p){ (void)p; }
void ClientGMPacketHandler::handleEditChar(EditChar* p){ (void)p; }
void ClientGMPacketHandler::handleRequestCharInfo(RequestCharInfo* p){ (void)p; }
void ClientGMPacketHandler::handleRequestCharStats(RequestCharStats* p){ (void)p; }
void ClientGMPacketHandler::handleRequestCharGold(RequestCharGold* p){ (void)p; }
void ClientGMPacketHandler::handleRequestCharInventory(RequestCharInventory* p){ (void)p; }
void ClientGMPacketHandler::handleRequestCharBank(RequestCharBank* p){ (void)p; }
void ClientGMPacketHandler::handleRequestCharSkills(RequestCharSkills* p){ (void)p; }
void ClientGMPacketHandler::handleReviveChar(ReviveChar* p){ (void)p; }
void ClientGMPacketHandler::handleOnlineGM(OnlineGM* p){ (void)p; }
void ClientGMPacketHandler::handleOnlineMap(OnlineMap* p){ (void)p; }
void ClientGMPacketHandler::handleForgive(Forgive* p){ (void)p; }
void ClientGMPacketHandler::handleKick(Kick* p){ (void)p; }
void ClientGMPacketHandler::handleExecute(Execute* p){ (void)p; }
void ClientGMPacketHandler::handleBanChar(BanChar* p){ (void)p; }
void ClientGMPacketHandler::handleUnbanChar(UnbanChar* p){ (void)p; }
void ClientGMPacketHandler::handleNPCFollow(NPCFollow* p){ (void)p; }
void ClientGMPacketHandler::handleSummonChar(SummonChar* p){ (void)p; }
void ClientGMPacketHandler::handleSpawnListRequest(SpawnListRequest* p){ (void)p; }
void ClientGMPacketHandler::handleSpawnCreature(SpawnCreature* p){ (void)p; }
void ClientGMPacketHandler::handleResetNPCInventory(ResetNPCInventory* p){ (void)p; }
void ClientGMPacketHandler::handleCleanWorld(CleanWorld* p){ (void)p; }
void ClientGMPacketHandler::handleServerMessage(ServerMessage* p){ (void)p; }
void ClientGMPacketHandler::handleNickToIP(NickToIP* p){ (void)p; }
void ClientGMPacketHandler::handleIPToNick(IPToNick* p){ (void)p; }
void ClientGMPacketHandler::handleGuildOnlineMembers(GuildOnlineMembers* p){ (void)p; }
void ClientGMPacketHandler::handleTeleportCreate(TeleportCreate* p){ (void)p; }
void ClientGMPacketHandler::handleTeleportDestroy(TeleportDestroy* p){ (void)p; }
void ClientGMPacketHandler::handleRainToggle(RainToggle* p){ (void)p; }
void ClientGMPacketHandler::handleSetCharDescription(SetCharDescription* p){ (void)p; }
void ClientGMPacketHandler::handleForceMIDIToMap(ForceMIDIToMap* p){ (void)p; }
void ClientGMPacketHandler::handleForceWAVEToMap(ForceWAVEToMap* p){ (void)p; }
void ClientGMPacketHandler::handleRoyalArmyMessage(RoyalArmyMessage* p){ (void)p; }
void ClientGMPacketHandler::handleChaosLegionMessage(ChaosLegionMessage* p){ (void)p; }
void ClientGMPacketHandler::handleCitizenMessage(CitizenMessage* p){ (void)p; }
void ClientGMPacketHandler::handleCriminalMessage(CriminalMessage* p){ (void)p; }
void ClientGMPacketHandler::handleTalkAsNPC(TalkAsNPC* p){ (void)p; }
void ClientGMPacketHandler::handleDestroyAllItemsInArea(DestroyAllItemsInArea* p){ (void)p; }
void ClientGMPacketHandler::handleAcceptRoyalCouncilMember(AcceptRoyalCouncilMember* p){ (void)p; }
void ClientGMPacketHandler::handleAcceptChaosCouncilMember(AcceptChaosCouncilMember* p){ (void)p; }
void ClientGMPacketHandler::handleItemsInTheFloor(ItemsInTheFloor* p){ (void)p; }
void ClientGMPacketHandler::handleMakeDumb(MakeDumb* p){ (void)p; }
void ClientGMPacketHandler::handleMakeDumbNoMore(MakeDumbNoMore* p){ (void)p; }
void ClientGMPacketHandler::handleDumpIPTables(DumpIPTables* p){ (void)p; }
void ClientGMPacketHandler::handleCouncilKick(CouncilKick* p){ (void)p; }
void ClientGMPacketHandler::handleSetTrigger(SetTrigger* p){ (void)p; }
void ClientGMPacketHandler::handleAskTrigger(AskTrigger* p){ (void)p; }
void ClientGMPacketHandler::handleBannedIPList(BannedIPList* p){ (void)p; }
void ClientGMPacketHandler::handleBannedIPReload(BannedIPReload* p){ (void)p; }
void ClientGMPacketHandler::handleGuildMemberList(GuildMemberList* p){ (void)p; }
void ClientGMPacketHandler::handleGuildBan(GuildBan* p){ (void)p; }
void ClientGMPacketHandler::handleBanIP(BanIP* p){ (void)p; }
void ClientGMPacketHandler::handleUnbanIP(UnbanIP* p){ (void)p; }
void ClientGMPacketHandler::handleCreateItem(CreateItem* p){ (void)p; }
void ClientGMPacketHandler::handleDestroyItems(DestroyItems* p){ (void)p; }
void ClientGMPacketHandler::handleChaosLegionKick(ChaosLegionKick* p){ (void)p; }
void ClientGMPacketHandler::handleRoyalArmyKick(RoyalArmyKick* p){ (void)p; }
void ClientGMPacketHandler::handleForceMIDIAll(ForceMIDIAll* p){ (void)p; }
void ClientGMPacketHandler::handleForceWAVEAll(ForceWAVEAll* p){ (void)p; }
void ClientGMPacketHandler::handleRemovePunishment(RemovePunishment* p){ (void)p; }
void ClientGMPacketHandler::handleTileBlockedToggle(TileBlockedToggle* p){ (void)p; }
void ClientGMPacketHandler::handleKillNPCNoRespawn(KillNPCNoRespawn* p){ (void)p; }
void ClientGMPacketHandler::handleKillAllNearbyNPCs(KillAllNearbyNPCs* p){ (void)p; }
void ClientGMPacketHandler::handleLastIP(LastIP* p){ (void)p; }
void ClientGMPacketHandler::handleChangeMOTD(ChangeMOTD* p){ (void)p; }
void ClientGMPacketHandler::handleSetMOTD(SetMOTD* p){ (void)p; }
void ClientGMPacketHandler::handleSystemMessage(SystemMessage* p){ (void)p; }
void ClientGMPacketHandler::handleCreateNPC(CreateNPC* p){ (void)p; }
void ClientGMPacketHandler::handleCreateNPCWithRespawn(CreateNPCWithRespawn* p){ (void)p; }
void ClientGMPacketHandler::handleImperialArmour(ImperialArmour* p){ (void)p; }
void ClientGMPacketHandler::handleChaosArmour(ChaosArmour* p){ (void)p; }
void ClientGMPacketHandler::handleNavigateToggle(NavigateToggle* p){ (void)p; }
void ClientGMPacketHandler::handleServerOpenToUsersToggle(ServerOpenToUsersToggle* p){ (void)p; }
void ClientGMPacketHandler::handleTurnOffServer(TurnOffServer* p){ (void)p; }
void ClientGMPacketHandler::handleTurnCriminal(TurnCriminal* p){ (void)p; }
void ClientGMPacketHandler::handleResetFactions(ResetFactions* p){ (void)p; }
void ClientGMPacketHandler::handleRemoveCharFromGuild(RemoveCharFromGuild* p){ (void)p; }
void ClientGMPacketHandler::handleRequestCharMail(RequestCharMail* p){ (void)p; }
void ClientGMPacketHandler::handleAlterPassword(AlterPassword* p){ (void)p; }
void ClientGMPacketHandler::handleAlterMail(AlterMail* p){ (void)p; }
void ClientGMPacketHandler::handleAlterName(AlterName* p){ (void)p; }
void ClientGMPacketHandler::handleToggleCentinelActivated(ToggleCentinelActivated* p){ (void)p; }
void ClientGMPacketHandler::handleDoBackUp(DoBackUp* p){ (void)p; }
void ClientGMPacketHandler::handleShowGuildMessages(ShowGuildMessages* p){ (void)p; }
void ClientGMPacketHandler::handleSaveMap(SaveMap* p){ (void)p; }
void ClientGMPacketHandler::handleChangeMapInfoPK(ChangeMapInfoPK* p){ (void)p; }
void ClientGMPacketHandler::handleChangeMapInfoBackup(ChangeMapInfoBackup* p){ (void)p; }
void ClientGMPacketHandler::handleChangeMapInfoRestricted(ChangeMapInfoRestricted* p){ (void)p; }
void ClientGMPacketHandler::handleChangeMapInfoNoMagic(ChangeMapInfoNoMagic* p){ (void)p; }
void ClientGMPacketHandler::handleChangeMapInfoNoInvi(ChangeMapInfoNoInvi* p){ (void)p; }
void ClientGMPacketHandler::handleChangeMapInfoNoResu(ChangeMapInfoNoResu* p){ (void)p; }
void ClientGMPacketHandler::handleChangeMapInfoLand(ChangeMapInfoLand* p){ (void)p; }
void ClientGMPacketHandler::handleChangeMapInfoZone(ChangeMapInfoZone* p){ (void)p; }
void ClientGMPacketHandler::handleChangeMapInfoStealNpc(ChangeMapInfoStealNpc* p){ (void)p; }
void ClientGMPacketHandler::handleChangeMapInfoNoOcultar(ChangeMapInfoNoOcultar* p){ (void)p; }
void ClientGMPacketHandler::handleChangeMapInfoNoInvocar(ChangeMapInfoNoInvocar* p){ (void)p; }
void ClientGMPacketHandler::handleSaveChars(SaveChars* p){ (void)p; }
void ClientGMPacketHandler::handleCleanSOS(CleanSOS* p){ (void)p; }
void ClientGMPacketHandler::handleShowServerForm(ShowServerForm* p){ (void)p; }
void ClientGMPacketHandler::handleNight(Night* p){ (void)p; }
void ClientGMPacketHandler::handleKickAllChars(KickAllChars* p){ (void)p; }
void ClientGMPacketHandler::handleReloadNPCs(ReloadNPCs* p){ (void)p; }
void ClientGMPacketHandler::handleReloadServerIni(ReloadServerIni* p){ (void)p; }
void ClientGMPacketHandler::handleReloadSpells(ReloadSpells* p){ (void)p; }
void ClientGMPacketHandler::handleReloadObjects(ReloadObjects* p){ (void)p; }
void ClientGMPacketHandler::handleRestart(Restart* p){ (void)p; }
void ClientGMPacketHandler::handleResetAutoUpdate(ResetAutoUpdate* p){ (void)p; }
void ClientGMPacketHandler::handleChatColor(ChatColor* p){ (void)p; }
void ClientGMPacketHandler::handleIgnored(Ignored* p){ (void)p; }
void ClientGMPacketHandler::handleCheckSlot(CheckSlot* p){ (void)p; }
void ClientGMPacketHandler::handleSetIniVar(SetIniVar* p){ (void)p; }
void ClientGMPacketHandler::handleCreatePretorianClan(CreatePretorianClan* p){ (void)p; }
void ClientGMPacketHandler::handleRemovePretorianClan(RemovePretorianClan* p){ (void)p; }
void ClientGMPacketHandler::handleEnableDenounces(EnableDenounces* p){ (void)p; }
void ClientGMPacketHandler::handleShowDenouncesList(ShowDenouncesList* p){ (void)p; }
void ClientGMPacketHandler::handleMapMessage(MapMessage* p){ (void)p; }
void ClientGMPacketHandler::handleSetDialog(SetDialog* p){ (void)p; }
void ClientGMPacketHandler::handleImpersonate(Impersonate* p){ (void)p; }
void ClientGMPacketHandler::handleImitate(Imitate* p){ (void)p; }
void ClientGMPacketHandler::handleRecordAdd(RecordAdd* p){ (void)p; }
void ClientGMPacketHandler::handleRecordRemove(RecordRemove* p){ (void)p; }
void ClientGMPacketHandler::handleRecordAddObs(RecordAddObs* p){ (void)p; }
void ClientGMPacketHandler::handleRecordListRequest(RecordListRequest* p){ (void)p; }
void ClientGMPacketHandler::handleRecordDetailsRequest(RecordDetailsRequest* p){ (void)p; }
void ClientGMPacketHandler::handleAlterGuildName(AlterGuildName* p){ (void)p; }
void ClientGMPacketHandler::handleHigherAdminsMessage(HigherAdminsMessage* p){ (void)p; }

}

namespace server {

ServerPacket* ServerPacketFactory(clsByteQueue* buffer) {
    if (buffer->length() < 1) return 0;
    ServerPacket *p = 0;
    int PacketID = buffer->PeekByte();

    switch (PacketID) {

        case 0:
            p = new Logged(buffer);
            break;

        case 1:
            p = new RemoveDialogs(buffer);
            break;

        case 2:
            p = new RemoveCharDialog(buffer);
            break;

        case 3:
            p = new NavigateToggle(buffer);
            break;

        case 4:
            p = new Disconnect(buffer);
            break;

        case 5:
            p = new CommerceEnd(buffer);
            break;

        case 6:
            p = new BankEnd(buffer);
            break;

        case 7:
            p = new CommerceInit(buffer);
            break;

        case 8:
            p = new BankInit(buffer);
            break;

        case 9:
            p = new UserCommerceInit(buffer);
            break;

        case 10:
            p = new UserCommerceEnd(buffer);
            break;

        case 11:
            p = new UserOfferConfirm(buffer);
            break;

        case 12:
            p = new CommerceChat(buffer);
            break;

        case 13:
            p = new ShowBlacksmithForm(buffer);
            break;

        case 14:
            p = new ShowCarpenterForm(buffer);
            break;

        case 15:
            p = new UpdateSta(buffer);
            break;

        case 16:
            p = new UpdateMana(buffer);
            break;

        case 17:
            p = new UpdateHP(buffer);
            break;

        case 18:
            p = new UpdateGold(buffer);
            break;

        case 19:
            p = new UpdateBankGold(buffer);
            break;

        case 20:
            p = new UpdateExp(buffer);
            break;

        case 21:
            p = new ChangeMap(buffer);
            break;

        case 22:
            p = new PosUpdate(buffer);
            break;

        case 23:
            p = new ChatOverHead(buffer);
            break;

        case 24:
            p = new ConsoleMsg(buffer);
            break;

        case 25:
            p = new GuildChat(buffer);
            break;

        case 26:
            p = new ShowMessageBox(buffer);
            break;

        case 27:
            p = new UserIndexInServer(buffer);
            break;

        case 28:
            p = new UserCharIndexInServer(buffer);
            break;

        case 29:
            p = new CharacterCreate(buffer);
            break;

        case 30:
            p = new CharacterRemove(buffer);
            break;

        case 31:
            p = new CharacterChangeNick(buffer);
            break;

        case 32:
            p = new CharacterMove(buffer);
            break;

        case 33:
            p = new ForceCharMove(buffer);
            break;

        case 34:
            p = new CharacterChange(buffer);
            break;

        case 35:
            p = new ObjectCreate(buffer);
            break;

        case 36:
            p = new ObjectDelete(buffer);
            break;

        case 37:
            p = new BlockPosition(buffer);
            break;

        case 38:
            p = new PlayMidi(buffer);
            break;

        case 39:
            p = new PlayWave(buffer);
            break;

        case 40:
            p = new GuildList(buffer);
            break;

        case 41:
            p = new AreaChanged(buffer);
            break;

        case 42:
            p = new PauseToggle(buffer);
            break;

        case 43:
            p = new RainToggle(buffer);
            break;

        case 44:
            p = new CreateFX(buffer);
            break;

        case 45:
            p = new UpdateUserStats(buffer);
            break;

        case 46:
            p = new WorkRequestTarget(buffer);
            break;

        case 47:
            p = new ChangeInventorySlot(buffer);
            break;

        case 48:
            p = new ChangeBankSlot(buffer);
            break;

        case 49:
            p = new ChangeSpellSlot(buffer);
            break;

        case 50:
            p = new Atributes(buffer);
            break;

        case 51:
            p = new BlacksmithWeapons(buffer);
            break;

        case 52:
            p = new BlacksmithArmors(buffer);
            break;

        case 53:
            p = new CarpenterObjects(buffer);
            break;

        case 54:
            p = new RestOK(buffer);
            break;

        case 55:
            p = new ErrorMsg(buffer);
            break;

        case 56:
            p = new Blind(buffer);
            break;

        case 57:
            p = new Dumb(buffer);
            break;

        case 58:
            p = new ShowSignal(buffer);
            break;

        case 59:
            p = new ChangeNPCInventorySlot(buffer);
            break;

        case 60:
            p = new UpdateHungerAndThirst(buffer);
            break;

        case 61:
            p = new Fame(buffer);
            break;

        case 62:
            p = new MiniStats(buffer);
            break;

        case 63:
            p = new LevelUp(buffer);
            break;

        case 64:
            p = new AddForumMsg(buffer);
            break;

        case 65:
            p = new ShowForumForm(buffer);
            break;

        case 66:
            p = new SetInvisible(buffer);
            break;

        case 67:
            p = new DiceRoll(buffer);
            break;

        case 68:
            p = new MeditateToggle(buffer);
            break;

        case 69:
            p = new BlindNoMore(buffer);
            break;

        case 70:
            p = new DumbNoMore(buffer);
            break;

        case 71:
            p = new SendSkills(buffer);
            break;

        case 72:
            p = new TrainerCreatureList(buffer);
            break;

        case 73:
            p = new GuildNews(buffer);
            break;

        case 74:
            p = new OfferDetails(buffer);
            break;

        case 75:
            p = new AlianceProposalsList(buffer);
            break;

        case 76:
            p = new PeaceProposalsList(buffer);
            break;

        case 77:
            p = new CharacterInfo(buffer);
            break;

        case 78:
            p = new GuildLeaderInfo(buffer);
            break;

        case 79:
            p = new GuildMemberInfo(buffer);
            break;

        case 80:
            p = new GuildDetails(buffer);
            break;

        case 81:
            p = new ShowGuildFundationForm(buffer);
            break;

        case 82:
            p = new ParalizeOK(buffer);
            break;

        case 83:
            p = new ShowUserRequest(buffer);
            break;

        case 84:
            p = new TradeOK(buffer);
            break;

        case 85:
            p = new BankOK(buffer);
            break;

        case 86:
            p = new ChangeUserTradeSlot(buffer);
            break;

        case 87:
            p = new SendNight(buffer);
            break;

        case 88:
            p = new Pong(buffer);
            break;

        case 89:
            p = new UpdateTagAndStatus(buffer);
            break;

        case 90:
            p = new SpawnList(buffer);
            break;

        case 91:
            p = new ShowSOSForm(buffer);
            break;

        case 92:
            p = new ShowMOTDEditionForm(buffer);
            break;

        case 93:
            p = new ShowGMPanelForm(buffer);
            break;

        case 94:
            p = new UserNameList(buffer);
            break;

        case 95:
            p = new ShowDenounces(buffer);
            break;

        case 96:
            p = new RecordList(buffer);
            break;

        case 97:
            p = new RecordDetails(buffer);
            break;

        case 98:
            p = new ShowGuildAlign(buffer);
            break;

        case 99:
            p = new ShowPartyForm(buffer);
            break;

        case 100:
            p = new UpdateStrenghtAndDexterity(buffer);
            break;

        case 101:
            p = new UpdateStrenght(buffer);
            break;

        case 102:
            p = new UpdateDexterity(buffer);
            break;

        case 103:
            p = new AddSlots(buffer);
            break;

        case 104:
            p = new MultiMessage(buffer);
            break;

        case 105:
            p = new StopWorking(buffer);
            break;

        case 106:
            p = new CancelOfferItem(buffer);
            break;

    }
    return p;
}

void ServerPacketDecodeAndDispatch(clsByteQueue* buffer, PacketHandler* handler) {
    if (buffer->length() < 1) return;
    int PacketID = buffer->PeekByte();

    switch (PacketID) {

        case 0:
        {
            Logged p(buffer);
            p.dispatch(handler);
            break;
        }

        case 1:
        {
            RemoveDialogs p(buffer);
            p.dispatch(handler);
            break;
        }

        case 2:
        {
            RemoveCharDialog p(buffer);
            p.dispatch(handler);
            break;
        }

        case 3:
        {
            NavigateToggle p(buffer);
            p.dispatch(handler);
            break;
        }

        case 4:
        {
            Disconnect p(buffer);
            p.dispatch(handler);
            break;
        }

        case 5:
        {
            CommerceEnd p(buffer);
            p.dispatch(handler);
            break;
        }

        case 6:
        {
            BankEnd p(buffer);
            p.dispatch(handler);
            break;
        }

        case 7:
        {
            CommerceInit p(buffer);
            p.dispatch(handler);
            break;
        }

        case 8:
        {
            BankInit p(buffer);
            p.dispatch(handler);
            break;
        }

        case 9:
        {
            UserCommerceInit p(buffer);
            p.dispatch(handler);
            break;
        }

        case 10:
        {
            UserCommerceEnd p(buffer);
            p.dispatch(handler);
            break;
        }

        case 11:
        {
            UserOfferConfirm p(buffer);
            p.dispatch(handler);
            break;
        }

        case 12:
        {
            CommerceChat p(buffer);
            p.dispatch(handler);
            break;
        }

        case 13:
        {
            ShowBlacksmithForm p(buffer);
            p.dispatch(handler);
            break;
        }

        case 14:
        {
            ShowCarpenterForm p(buffer);
            p.dispatch(handler);
            break;
        }

        case 15:
        {
            UpdateSta p(buffer);
            p.dispatch(handler);
            break;
        }

        case 16:
        {
            UpdateMana p(buffer);
            p.dispatch(handler);
            break;
        }

        case 17:
        {
            UpdateHP p(buffer);
            p.dispatch(handler);
            break;
        }

        case 18:
        {
            UpdateGold p(buffer);
            p.dispatch(handler);
            break;
        }

        case 19:
        {
            UpdateBankGold p(buffer);
            p.dispatch(handler);
            break;
        }

        case 20:
        {
            UpdateExp p(buffer);
            p.dispatch(handler);
            break;
        }

        case 21:
        {
            ChangeMap p(buffer);
            p.dispatch(handler);
            break;
        }

        case 22:
        {
            PosUpdate p(buffer);
            p.dispatch(handler);
            break;
        }

        case 23:
        {
            ChatOverHead p(buffer);
            p.dispatch(handler);
            break;
        }

        case 24:
        {
            ConsoleMsg p(buffer);
            p.dispatch(handler);
            break;
        }

        case 25:
        {
            GuildChat p(buffer);
            p.dispatch(handler);
            break;
        }

        case 26:
        {
            ShowMessageBox p(buffer);
            p.dispatch(handler);
            break;
        }

        case 27:
        {
            UserIndexInServer p(buffer);
            p.dispatch(handler);
            break;
        }

        case 28:
        {
            UserCharIndexInServer p(buffer);
            p.dispatch(handler);
            break;
        }

        case 29:
        {
            CharacterCreate p(buffer);
            p.dispatch(handler);
            break;
        }

        case 30:
        {
            CharacterRemove p(buffer);
            p.dispatch(handler);
            break;
        }

        case 31:
        {
            CharacterChangeNick p(buffer);
            p.dispatch(handler);
            break;
        }

        case 32:
        {
            CharacterMove p(buffer);
            p.dispatch(handler);
            break;
        }

        case 33:
        {
            ForceCharMove p(buffer);
            p.dispatch(handler);
            break;
        }

        case 34:
        {
            CharacterChange p(buffer);
            p.dispatch(handler);
            break;
        }

        case 35:
        {
            ObjectCreate p(buffer);
            p.dispatch(handler);
            break;
        }

        case 36:
        {
            ObjectDelete p(buffer);
            p.dispatch(handler);
            break;
        }

        case 37:
        {
            BlockPosition p(buffer);
            p.dispatch(handler);
            break;
        }

        case 38:
        {
            PlayMidi p(buffer);
            p.dispatch(handler);
            break;
        }

        case 39:
        {
            PlayWave p(buffer);
            p.dispatch(handler);
            break;
        }

        case 40:
        {
            GuildList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 41:
        {
            AreaChanged p(buffer);
            p.dispatch(handler);
            break;
        }

        case 42:
        {
            PauseToggle p(buffer);
            p.dispatch(handler);
            break;
        }

        case 43:
        {
            RainToggle p(buffer);
            p.dispatch(handler);
            break;
        }

        case 44:
        {
            CreateFX p(buffer);
            p.dispatch(handler);
            break;
        }

        case 45:
        {
            UpdateUserStats p(buffer);
            p.dispatch(handler);
            break;
        }

        case 46:
        {
            WorkRequestTarget p(buffer);
            p.dispatch(handler);
            break;
        }

        case 47:
        {
            ChangeInventorySlot p(buffer);
            p.dispatch(handler);
            break;
        }

        case 48:
        {
            ChangeBankSlot p(buffer);
            p.dispatch(handler);
            break;
        }

        case 49:
        {
            ChangeSpellSlot p(buffer);
            p.dispatch(handler);
            break;
        }

        case 50:
        {
            Atributes p(buffer);
            p.dispatch(handler);
            break;
        }

        case 51:
        {
            BlacksmithWeapons p(buffer);
            p.dispatch(handler);
            break;
        }

        case 52:
        {
            BlacksmithArmors p(buffer);
            p.dispatch(handler);
            break;
        }

        case 53:
        {
            CarpenterObjects p(buffer);
            p.dispatch(handler);
            break;
        }

        case 54:
        {
            RestOK p(buffer);
            p.dispatch(handler);
            break;
        }

        case 55:
        {
            ErrorMsg p(buffer);
            p.dispatch(handler);
            break;
        }

        case 56:
        {
            Blind p(buffer);
            p.dispatch(handler);
            break;
        }

        case 57:
        {
            Dumb p(buffer);
            p.dispatch(handler);
            break;
        }

        case 58:
        {
            ShowSignal p(buffer);
            p.dispatch(handler);
            break;
        }

        case 59:
        {
            ChangeNPCInventorySlot p(buffer);
            p.dispatch(handler);
            break;
        }

        case 60:
        {
            UpdateHungerAndThirst p(buffer);
            p.dispatch(handler);
            break;
        }

        case 61:
        {
            Fame p(buffer);
            p.dispatch(handler);
            break;
        }

        case 62:
        {
            MiniStats p(buffer);
            p.dispatch(handler);
            break;
        }

        case 63:
        {
            LevelUp p(buffer);
            p.dispatch(handler);
            break;
        }

        case 64:
        {
            AddForumMsg p(buffer);
            p.dispatch(handler);
            break;
        }

        case 65:
        {
            ShowForumForm p(buffer);
            p.dispatch(handler);
            break;
        }

        case 66:
        {
            SetInvisible p(buffer);
            p.dispatch(handler);
            break;
        }

        case 67:
        {
            DiceRoll p(buffer);
            p.dispatch(handler);
            break;
        }

        case 68:
        {
            MeditateToggle p(buffer);
            p.dispatch(handler);
            break;
        }

        case 69:
        {
            BlindNoMore p(buffer);
            p.dispatch(handler);
            break;
        }

        case 70:
        {
            DumbNoMore p(buffer);
            p.dispatch(handler);
            break;
        }

        case 71:
        {
            SendSkills p(buffer);
            p.dispatch(handler);
            break;
        }

        case 72:
        {
            TrainerCreatureList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 73:
        {
            GuildNews p(buffer);
            p.dispatch(handler);
            break;
        }

        case 74:
        {
            OfferDetails p(buffer);
            p.dispatch(handler);
            break;
        }

        case 75:
        {
            AlianceProposalsList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 76:
        {
            PeaceProposalsList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 77:
        {
            CharacterInfo p(buffer);
            p.dispatch(handler);
            break;
        }

        case 78:
        {
            GuildLeaderInfo p(buffer);
            p.dispatch(handler);
            break;
        }

        case 79:
        {
            GuildMemberInfo p(buffer);
            p.dispatch(handler);
            break;
        }

        case 80:
        {
            GuildDetails p(buffer);
            p.dispatch(handler);
            break;
        }

        case 81:
        {
            ShowGuildFundationForm p(buffer);
            p.dispatch(handler);
            break;
        }

        case 82:
        {
            ParalizeOK p(buffer);
            p.dispatch(handler);
            break;
        }

        case 83:
        {
            ShowUserRequest p(buffer);
            p.dispatch(handler);
            break;
        }

        case 84:
        {
            TradeOK p(buffer);
            p.dispatch(handler);
            break;
        }

        case 85:
        {
            BankOK p(buffer);
            p.dispatch(handler);
            break;
        }

        case 86:
        {
            ChangeUserTradeSlot p(buffer);
            p.dispatch(handler);
            break;
        }

        case 87:
        {
            SendNight p(buffer);
            p.dispatch(handler);
            break;
        }

        case 88:
        {
            Pong p(buffer);
            p.dispatch(handler);
            break;
        }

        case 89:
        {
            UpdateTagAndStatus p(buffer);
            p.dispatch(handler);
            break;
        }

        case 90:
        {
            SpawnList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 91:
        {
            ShowSOSForm p(buffer);
            p.dispatch(handler);
            break;
        }

        case 92:
        {
            ShowMOTDEditionForm p(buffer);
            p.dispatch(handler);
            break;
        }

        case 93:
        {
            ShowGMPanelForm p(buffer);
            p.dispatch(handler);
            break;
        }

        case 94:
        {
            UserNameList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 95:
        {
            ShowDenounces p(buffer);
            p.dispatch(handler);
            break;
        }

        case 96:
        {
            RecordList p(buffer);
            p.dispatch(handler);
            break;
        }

        case 97:
        {
            RecordDetails p(buffer);
            p.dispatch(handler);
            break;
        }

        case 98:
        {
            ShowGuildAlign p(buffer);
            p.dispatch(handler);
            break;
        }

        case 99:
        {
            ShowPartyForm p(buffer);
            p.dispatch(handler);
            break;
        }

        case 100:
        {
            UpdateStrenghtAndDexterity p(buffer);
            p.dispatch(handler);
            break;
        }

        case 101:
        {
            UpdateStrenght p(buffer);
            p.dispatch(handler);
            break;
        }

        case 102:
        {
            UpdateDexterity p(buffer);
            p.dispatch(handler);
            break;
        }

        case 103:
        {
            AddSlots p(buffer);
            p.dispatch(handler);
            break;
        }

        case 104:
        {
            MultiMessage p(buffer);
            p.dispatch(handler);
            break;
        }

        case 105:
        {
            StopWorking p(buffer);
            p.dispatch(handler);
            break;
        }

        case 106:
        {
            CancelOfferItem p(buffer);
            p.dispatch(handler);
            break;
        }

        default:
        {
            std::stringstream ss;
            ss << "error decoding packet id: " << PacketID;
            throw PacketDecodingError(ss.str());
        }
    }
}

Logged::Logged() : ServerPacket(ServerPacketID_Logged /* 0 */), Clase() {
}

Logged::Logged(clsByteQueue* buffer) : ServerPacket(ServerPacketID_Logged /* 0 */) {
    buffer->ReadByte(); /* PacketID */
    Clase = buffer->ReadByte();

}

Logged::Logged(std::uint8_t Clase_) : ServerPacket(ServerPacketID_Logged /* 0 */), Clase(Clase_) {
}

void Logged::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_Logged); /* PacketID: 0 */
    buffer->WriteByte(Clase);

}

void Logged::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleLogged(this);
}

RemoveDialogs::RemoveDialogs() : ServerPacket(ServerPacketID_RemoveDialogs /* 1 */) {
}

RemoveDialogs::RemoveDialogs(clsByteQueue* buffer) : ServerPacket(ServerPacketID_RemoveDialogs /* 1 */) {
    buffer->ReadByte(); /* PacketID */

}

void RemoveDialogs::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_RemoveDialogs); /* PacketID: 1 */

}

void RemoveDialogs::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleRemoveDialogs(this);
}

RemoveCharDialog::RemoveCharDialog() : ServerPacket(ServerPacketID_RemoveCharDialog /* 2 */), CharIndex() {
}

RemoveCharDialog::RemoveCharDialog(clsByteQueue* buffer) : ServerPacket(ServerPacketID_RemoveCharDialog /* 2 */) {
    buffer->ReadByte(); /* PacketID */
    CharIndex = buffer->ReadInteger();

}

RemoveCharDialog::RemoveCharDialog(std::int16_t CharIndex_) : ServerPacket(ServerPacketID_RemoveCharDialog /* 2 */), CharIndex(CharIndex_) {
}

void RemoveCharDialog::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_RemoveCharDialog); /* PacketID: 2 */
    buffer->WriteInteger(CharIndex);

}

void RemoveCharDialog::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleRemoveCharDialog(this);
}

NavigateToggle::NavigateToggle() : ServerPacket(ServerPacketID_NavigateToggle /* 3 */) {
}

NavigateToggle::NavigateToggle(clsByteQueue* buffer) : ServerPacket(ServerPacketID_NavigateToggle /* 3 */) {
    buffer->ReadByte(); /* PacketID */

}

void NavigateToggle::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_NavigateToggle); /* PacketID: 3 */

}

void NavigateToggle::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleNavigateToggle(this);
}

Disconnect::Disconnect() : ServerPacket(ServerPacketID_Disconnect /* 4 */) {
}

Disconnect::Disconnect(clsByteQueue* buffer) : ServerPacket(ServerPacketID_Disconnect /* 4 */) {
    buffer->ReadByte(); /* PacketID */

}

void Disconnect::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_Disconnect); /* PacketID: 4 */

}

void Disconnect::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleDisconnect(this);
}

CommerceEnd::CommerceEnd() : ServerPacket(ServerPacketID_CommerceEnd /* 5 */) {
}

CommerceEnd::CommerceEnd(clsByteQueue* buffer) : ServerPacket(ServerPacketID_CommerceEnd /* 5 */) {
    buffer->ReadByte(); /* PacketID */

}

void CommerceEnd::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_CommerceEnd); /* PacketID: 5 */

}

void CommerceEnd::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleCommerceEnd(this);
}

BankEnd::BankEnd() : ServerPacket(ServerPacketID_BankEnd /* 6 */) {
}

BankEnd::BankEnd(clsByteQueue* buffer) : ServerPacket(ServerPacketID_BankEnd /* 6 */) {
    buffer->ReadByte(); /* PacketID */

}

void BankEnd::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_BankEnd); /* PacketID: 6 */

}

void BankEnd::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleBankEnd(this);
}

CommerceInit::CommerceInit() : ServerPacket(ServerPacketID_CommerceInit /* 7 */) {
}

CommerceInit::CommerceInit(clsByteQueue* buffer) : ServerPacket(ServerPacketID_CommerceInit /* 7 */) {
    buffer->ReadByte(); /* PacketID */

}

void CommerceInit::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_CommerceInit); /* PacketID: 7 */

}

void CommerceInit::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleCommerceInit(this);
}

BankInit::BankInit() : ServerPacket(ServerPacketID_BankInit /* 8 */), Banco() {
}

BankInit::BankInit(clsByteQueue* buffer) : ServerPacket(ServerPacketID_BankInit /* 8 */) {
    buffer->ReadByte(); /* PacketID */
    Banco = buffer->ReadLong();

}

BankInit::BankInit(std::int32_t Banco_) : ServerPacket(ServerPacketID_BankInit /* 8 */), Banco(Banco_) {
}

void BankInit::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_BankInit); /* PacketID: 8 */
    buffer->WriteLong(Banco);

}

void BankInit::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleBankInit(this);
}

UserCommerceInit::UserCommerceInit() : ServerPacket(ServerPacketID_UserCommerceInit /* 9 */), DestUserName() {
}

UserCommerceInit::UserCommerceInit(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UserCommerceInit /* 9 */) {
    buffer->ReadByte(); /* PacketID */
    DestUserName = buffer->ReadUnicodeString();

}

UserCommerceInit::UserCommerceInit(const std::string& DestUserName_) : ServerPacket(ServerPacketID_UserCommerceInit /* 9 */), DestUserName(DestUserName_) {
}

void UserCommerceInit::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UserCommerceInit); /* PacketID: 9 */
    buffer->WriteUnicodeString(DestUserName);

}

void UserCommerceInit::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUserCommerceInit(this);
}

UserCommerceEnd::UserCommerceEnd() : ServerPacket(ServerPacketID_UserCommerceEnd /* 10 */) {
}

UserCommerceEnd::UserCommerceEnd(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UserCommerceEnd /* 10 */) {
    buffer->ReadByte(); /* PacketID */

}

void UserCommerceEnd::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UserCommerceEnd); /* PacketID: 10 */

}

void UserCommerceEnd::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUserCommerceEnd(this);
}

UserOfferConfirm::UserOfferConfirm() : ServerPacket(ServerPacketID_UserOfferConfirm /* 11 */) {
}

UserOfferConfirm::UserOfferConfirm(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UserOfferConfirm /* 11 */) {
    buffer->ReadByte(); /* PacketID */

}

void UserOfferConfirm::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UserOfferConfirm); /* PacketID: 11 */

}

void UserOfferConfirm::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUserOfferConfirm(this);
}

CommerceChat::CommerceChat() : ServerPacket(ServerPacketID_CommerceChat /* 12 */), Chat(), FontIndex() {
}

CommerceChat::CommerceChat(clsByteQueue* buffer) : ServerPacket(ServerPacketID_CommerceChat /* 12 */) {
    buffer->ReadByte(); /* PacketID */
    Chat = buffer->ReadUnicodeString();
    FontIndex = buffer->ReadByte();

}

CommerceChat::CommerceChat(const std::string& Chat_, std::uint8_t FontIndex_) : ServerPacket(ServerPacketID_CommerceChat /* 12 */), Chat(Chat_), FontIndex(FontIndex_) {
}

void CommerceChat::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_CommerceChat); /* PacketID: 12 */
    buffer->WriteUnicodeString(Chat);
    buffer->WriteByte(FontIndex);

}

void CommerceChat::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleCommerceChat(this);
}

ShowBlacksmithForm::ShowBlacksmithForm() : ServerPacket(ServerPacketID_ShowBlacksmithForm /* 13 */) {
}

ShowBlacksmithForm::ShowBlacksmithForm(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ShowBlacksmithForm /* 13 */) {
    buffer->ReadByte(); /* PacketID */

}

void ShowBlacksmithForm::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ShowBlacksmithForm); /* PacketID: 13 */

}

void ShowBlacksmithForm::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleShowBlacksmithForm(this);
}

ShowCarpenterForm::ShowCarpenterForm() : ServerPacket(ServerPacketID_ShowCarpenterForm /* 14 */) {
}

ShowCarpenterForm::ShowCarpenterForm(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ShowCarpenterForm /* 14 */) {
    buffer->ReadByte(); /* PacketID */

}

void ShowCarpenterForm::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ShowCarpenterForm); /* PacketID: 14 */

}

void ShowCarpenterForm::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleShowCarpenterForm(this);
}

UpdateSta::UpdateSta() : ServerPacket(ServerPacketID_UpdateSta /* 15 */), Value() {
}

UpdateSta::UpdateSta(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UpdateSta /* 15 */) {
    buffer->ReadByte(); /* PacketID */
    Value = buffer->ReadInteger();

}

UpdateSta::UpdateSta(std::int16_t Value_) : ServerPacket(ServerPacketID_UpdateSta /* 15 */), Value(Value_) {
}

void UpdateSta::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UpdateSta); /* PacketID: 15 */
    buffer->WriteInteger(Value);

}

void UpdateSta::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUpdateSta(this);
}

UpdateMana::UpdateMana() : ServerPacket(ServerPacketID_UpdateMana /* 16 */), Value() {
}

UpdateMana::UpdateMana(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UpdateMana /* 16 */) {
    buffer->ReadByte(); /* PacketID */
    Value = buffer->ReadInteger();

}

UpdateMana::UpdateMana(std::int16_t Value_) : ServerPacket(ServerPacketID_UpdateMana /* 16 */), Value(Value_) {
}

void UpdateMana::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UpdateMana); /* PacketID: 16 */
    buffer->WriteInteger(Value);

}

void UpdateMana::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUpdateMana(this);
}

UpdateHP::UpdateHP() : ServerPacket(ServerPacketID_UpdateHP /* 17 */), Value() {
}

UpdateHP::UpdateHP(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UpdateHP /* 17 */) {
    buffer->ReadByte(); /* PacketID */
    Value = buffer->ReadInteger();

}

UpdateHP::UpdateHP(std::int16_t Value_) : ServerPacket(ServerPacketID_UpdateHP /* 17 */), Value(Value_) {
}

void UpdateHP::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UpdateHP); /* PacketID: 17 */
    buffer->WriteInteger(Value);

}

void UpdateHP::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUpdateHP(this);
}

UpdateGold::UpdateGold() : ServerPacket(ServerPacketID_UpdateGold /* 18 */), Value() {
}

UpdateGold::UpdateGold(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UpdateGold /* 18 */) {
    buffer->ReadByte(); /* PacketID */
    Value = buffer->ReadLong();

}

UpdateGold::UpdateGold(std::int32_t Value_) : ServerPacket(ServerPacketID_UpdateGold /* 18 */), Value(Value_) {
}

void UpdateGold::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UpdateGold); /* PacketID: 18 */
    buffer->WriteLong(Value);

}

void UpdateGold::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUpdateGold(this);
}

UpdateBankGold::UpdateBankGold() : ServerPacket(ServerPacketID_UpdateBankGold /* 19 */), Value() {
}

UpdateBankGold::UpdateBankGold(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UpdateBankGold /* 19 */) {
    buffer->ReadByte(); /* PacketID */
    Value = buffer->ReadLong();

}

UpdateBankGold::UpdateBankGold(std::int32_t Value_) : ServerPacket(ServerPacketID_UpdateBankGold /* 19 */), Value(Value_) {
}

void UpdateBankGold::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UpdateBankGold); /* PacketID: 19 */
    buffer->WriteLong(Value);

}

void UpdateBankGold::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUpdateBankGold(this);
}

UpdateExp::UpdateExp() : ServerPacket(ServerPacketID_UpdateExp /* 20 */), Value() {
}

UpdateExp::UpdateExp(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UpdateExp /* 20 */) {
    buffer->ReadByte(); /* PacketID */
    Value = buffer->ReadLong();

}

UpdateExp::UpdateExp(std::int32_t Value_) : ServerPacket(ServerPacketID_UpdateExp /* 20 */), Value(Value_) {
}

void UpdateExp::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UpdateExp); /* PacketID: 20 */
    buffer->WriteLong(Value);

}

void UpdateExp::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUpdateExp(this);
}

ChangeMap::ChangeMap() : ServerPacket(ServerPacketID_ChangeMap /* 21 */), Map(), Version() {
}

ChangeMap::ChangeMap(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ChangeMap /* 21 */) {
    buffer->ReadByte(); /* PacketID */
    Map = buffer->ReadInteger();
    Version = buffer->ReadInteger();

}

ChangeMap::ChangeMap(std::int16_t Map_, std::int16_t Version_) : ServerPacket(ServerPacketID_ChangeMap /* 21 */), Map(Map_), Version(Version_) {
}

void ChangeMap::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ChangeMap); /* PacketID: 21 */
    buffer->WriteInteger(Map);
    buffer->WriteInteger(Version);

}

void ChangeMap::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleChangeMap(this);
}

PosUpdate::PosUpdate() : ServerPacket(ServerPacketID_PosUpdate /* 22 */), X(), Y() {
}

PosUpdate::PosUpdate(clsByteQueue* buffer) : ServerPacket(ServerPacketID_PosUpdate /* 22 */) {
    buffer->ReadByte(); /* PacketID */
    X = buffer->ReadByte();
    Y = buffer->ReadByte();

}

PosUpdate::PosUpdate(std::uint8_t X_, std::uint8_t Y_) : ServerPacket(ServerPacketID_PosUpdate /* 22 */), X(X_), Y(Y_) {
}

void PosUpdate::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_PosUpdate); /* PacketID: 22 */
    buffer->WriteByte(X);
    buffer->WriteByte(Y);

}

void PosUpdate::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handlePosUpdate(this);
}

ChatOverHead::ChatOverHead() : ServerPacket(ServerPacketID_ChatOverHead /* 23 */), Chat(), CharIndex(), R(), G(), B() {
}

ChatOverHead::ChatOverHead(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ChatOverHead /* 23 */) {
    buffer->ReadByte(); /* PacketID */
    Chat = buffer->ReadUnicodeString();
    CharIndex = buffer->ReadInteger();
    R = buffer->ReadByte();
    G = buffer->ReadByte();
    B = buffer->ReadByte();

}

ChatOverHead::ChatOverHead(const std::string& Chat_, std::int16_t CharIndex_, std::uint8_t R_, std::uint8_t G_, std::uint8_t B_) : ServerPacket(ServerPacketID_ChatOverHead /* 23 */), Chat(Chat_), CharIndex(CharIndex_), R(R_), G(G_), B(B_) {
}

void ChatOverHead::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ChatOverHead); /* PacketID: 23 */
    buffer->WriteUnicodeString(Chat);
    buffer->WriteInteger(CharIndex);
    buffer->WriteByte(R);
    buffer->WriteByte(G);
    buffer->WriteByte(B);

}

void ChatOverHead::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleChatOverHead(this);
}

ConsoleMsg::ConsoleMsg() : ServerPacket(ServerPacketID_ConsoleMsg /* 24 */), Chat(), FontIndex() {
}

ConsoleMsg::ConsoleMsg(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ConsoleMsg /* 24 */) {
    buffer->ReadByte(); /* PacketID */
    Chat = buffer->ReadUnicodeString();
    FontIndex = buffer->ReadByte();

}

ConsoleMsg::ConsoleMsg(const std::string& Chat_, std::uint8_t FontIndex_) : ServerPacket(ServerPacketID_ConsoleMsg /* 24 */), Chat(Chat_), FontIndex(FontIndex_) {
}

void ConsoleMsg::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ConsoleMsg); /* PacketID: 24 */
    buffer->WriteUnicodeString(Chat);
    buffer->WriteByte(FontIndex);

}

void ConsoleMsg::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleConsoleMsg(this);
}

GuildChat::GuildChat() : ServerPacket(ServerPacketID_GuildChat /* 25 */), Chat() {
}

GuildChat::GuildChat(clsByteQueue* buffer) : ServerPacket(ServerPacketID_GuildChat /* 25 */) {
    buffer->ReadByte(); /* PacketID */
    Chat = buffer->ReadUnicodeString();

}

GuildChat::GuildChat(const std::string& Chat_) : ServerPacket(ServerPacketID_GuildChat /* 25 */), Chat(Chat_) {
}

void GuildChat::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_GuildChat); /* PacketID: 25 */
    buffer->WriteUnicodeString(Chat);

}

void GuildChat::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleGuildChat(this);
}

ShowMessageBox::ShowMessageBox() : ServerPacket(ServerPacketID_ShowMessageBox /* 26 */), Chat() {
}

ShowMessageBox::ShowMessageBox(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ShowMessageBox /* 26 */) {
    buffer->ReadByte(); /* PacketID */
    Chat = buffer->ReadUnicodeString();

}

ShowMessageBox::ShowMessageBox(const std::string& Chat_) : ServerPacket(ServerPacketID_ShowMessageBox /* 26 */), Chat(Chat_) {
}

void ShowMessageBox::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ShowMessageBox); /* PacketID: 26 */
    buffer->WriteUnicodeString(Chat);

}

void ShowMessageBox::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleShowMessageBox(this);
}

UserIndexInServer::UserIndexInServer() : ServerPacket(ServerPacketID_UserIndexInServer /* 27 */), UserIndex() {
}

UserIndexInServer::UserIndexInServer(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UserIndexInServer /* 27 */) {
    buffer->ReadByte(); /* PacketID */
    UserIndex = buffer->ReadInteger();

}

UserIndexInServer::UserIndexInServer(std::int16_t UserIndex_) : ServerPacket(ServerPacketID_UserIndexInServer /* 27 */), UserIndex(UserIndex_) {
}

void UserIndexInServer::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UserIndexInServer); /* PacketID: 27 */
    buffer->WriteInteger(UserIndex);

}

void UserIndexInServer::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUserIndexInServer(this);
}

UserCharIndexInServer::UserCharIndexInServer() : ServerPacket(ServerPacketID_UserCharIndexInServer /* 28 */), CharIndex() {
}

UserCharIndexInServer::UserCharIndexInServer(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UserCharIndexInServer /* 28 */) {
    buffer->ReadByte(); /* PacketID */
    CharIndex = buffer->ReadInteger();

}

UserCharIndexInServer::UserCharIndexInServer(std::int16_t CharIndex_) : ServerPacket(ServerPacketID_UserCharIndexInServer /* 28 */), CharIndex(CharIndex_) {
}

void UserCharIndexInServer::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UserCharIndexInServer); /* PacketID: 28 */
    buffer->WriteInteger(CharIndex);

}

void UserCharIndexInServer::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUserCharIndexInServer(this);
}

CharacterCreate::CharacterCreate() : ServerPacket(ServerPacketID_CharacterCreate /* 29 */), CharIndex(), Body(), Head(), Heading(), X(), Y(), Weapon(), Shield(), Helmet(), FX(), FXLoops(), Name(), NickColor(), Privileges() {
}

CharacterCreate::CharacterCreate(clsByteQueue* buffer) : ServerPacket(ServerPacketID_CharacterCreate /* 29 */) {
    buffer->ReadByte(); /* PacketID */
    CharIndex = buffer->ReadInteger();
    Body = buffer->ReadInteger();
    Head = buffer->ReadInteger();
    Heading = buffer->ReadByte();
    X = buffer->ReadByte();
    Y = buffer->ReadByte();
    Weapon = buffer->ReadInteger();
    Shield = buffer->ReadInteger();
    Helmet = buffer->ReadInteger();
    FX = buffer->ReadInteger();
    FXLoops = buffer->ReadInteger();
    Name = buffer->ReadUnicodeString();
    NickColor = buffer->ReadByte();
    Privileges = buffer->ReadByte();

}

CharacterCreate::CharacterCreate(std::int16_t CharIndex_, std::int16_t Body_, std::int16_t Head_, std::uint8_t Heading_, std::uint8_t X_, std::uint8_t Y_, std::int16_t Weapon_, std::int16_t Shield_, std::int16_t Helmet_, std::int16_t FX_, std::int16_t FXLoops_, const std::string& Name_, std::uint8_t NickColor_, std::uint8_t Privileges_) : ServerPacket(ServerPacketID_CharacterCreate /* 29 */), CharIndex(CharIndex_), Body(Body_), Head(Head_), Heading(Heading_), X(X_), Y(Y_), Weapon(Weapon_), Shield(Shield_), Helmet(Helmet_), FX(FX_), FXLoops(FXLoops_), Name(Name_), NickColor(NickColor_), Privileges(Privileges_) {
}

void CharacterCreate::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_CharacterCreate); /* PacketID: 29 */
    buffer->WriteInteger(CharIndex);
    buffer->WriteInteger(Body);
    buffer->WriteInteger(Head);
    buffer->WriteByte(Heading);
    buffer->WriteByte(X);
    buffer->WriteByte(Y);
    buffer->WriteInteger(Weapon);
    buffer->WriteInteger(Shield);
    buffer->WriteInteger(Helmet);
    buffer->WriteInteger(FX);
    buffer->WriteInteger(FXLoops);
    buffer->WriteUnicodeString(Name);
    buffer->WriteByte(NickColor);
    buffer->WriteByte(Privileges);

}

void CharacterCreate::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleCharacterCreate(this);
}

CharacterRemove::CharacterRemove() : ServerPacket(ServerPacketID_CharacterRemove /* 30 */), CharIndex() {
}

CharacterRemove::CharacterRemove(clsByteQueue* buffer) : ServerPacket(ServerPacketID_CharacterRemove /* 30 */) {
    buffer->ReadByte(); /* PacketID */
    CharIndex = buffer->ReadInteger();

}

CharacterRemove::CharacterRemove(std::int16_t CharIndex_) : ServerPacket(ServerPacketID_CharacterRemove /* 30 */), CharIndex(CharIndex_) {
}

void CharacterRemove::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_CharacterRemove); /* PacketID: 30 */
    buffer->WriteInteger(CharIndex);

}

void CharacterRemove::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleCharacterRemove(this);
}

CharacterChangeNick::CharacterChangeNick() : ServerPacket(ServerPacketID_CharacterChangeNick /* 31 */), CharIndex(), NewName() {
}

CharacterChangeNick::CharacterChangeNick(clsByteQueue* buffer) : ServerPacket(ServerPacketID_CharacterChangeNick /* 31 */) {
    buffer->ReadByte(); /* PacketID */
    CharIndex = buffer->ReadInteger();
    NewName = buffer->ReadUnicodeString();

}

CharacterChangeNick::CharacterChangeNick(std::int16_t CharIndex_, const std::string& NewName_) : ServerPacket(ServerPacketID_CharacterChangeNick /* 31 */), CharIndex(CharIndex_), NewName(NewName_) {
}

void CharacterChangeNick::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_CharacterChangeNick); /* PacketID: 31 */
    buffer->WriteInteger(CharIndex);
    buffer->WriteUnicodeString(NewName);

}

void CharacterChangeNick::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleCharacterChangeNick(this);
}

CharacterMove::CharacterMove() : ServerPacket(ServerPacketID_CharacterMove /* 32 */), CharIndex(), X(), Y() {
}

CharacterMove::CharacterMove(clsByteQueue* buffer) : ServerPacket(ServerPacketID_CharacterMove /* 32 */) {
    buffer->ReadByte(); /* PacketID */
    CharIndex = buffer->ReadInteger();
    X = buffer->ReadByte();
    Y = buffer->ReadByte();

}

CharacterMove::CharacterMove(std::int16_t CharIndex_, std::uint8_t X_, std::uint8_t Y_) : ServerPacket(ServerPacketID_CharacterMove /* 32 */), CharIndex(CharIndex_), X(X_), Y(Y_) {
}

void CharacterMove::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_CharacterMove); /* PacketID: 32 */
    buffer->WriteInteger(CharIndex);
    buffer->WriteByte(X);
    buffer->WriteByte(Y);

}

void CharacterMove::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleCharacterMove(this);
}

ForceCharMove::ForceCharMove() : ServerPacket(ServerPacketID_ForceCharMove /* 33 */), Direction() {
}

ForceCharMove::ForceCharMove(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ForceCharMove /* 33 */) {
    buffer->ReadByte(); /* PacketID */
    Direction = buffer->ReadByte();

}

ForceCharMove::ForceCharMove(std::uint8_t Direction_) : ServerPacket(ServerPacketID_ForceCharMove /* 33 */), Direction(Direction_) {
}

void ForceCharMove::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ForceCharMove); /* PacketID: 33 */
    buffer->WriteByte(Direction);

}

void ForceCharMove::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleForceCharMove(this);
}

CharacterChange::CharacterChange() : ServerPacket(ServerPacketID_CharacterChange /* 34 */), CharIndex(), Body(), Head(), Heading(), Weapon(), Shield(), Helmet(), FX(), FXLoops() {
}

CharacterChange::CharacterChange(clsByteQueue* buffer) : ServerPacket(ServerPacketID_CharacterChange /* 34 */) {
    buffer->ReadByte(); /* PacketID */
    CharIndex = buffer->ReadInteger();
    Body = buffer->ReadInteger();
    Head = buffer->ReadInteger();
    Heading = buffer->ReadByte();
    Weapon = buffer->ReadInteger();
    Shield = buffer->ReadInteger();
    Helmet = buffer->ReadInteger();
    FX = buffer->ReadInteger();
    FXLoops = buffer->ReadInteger();

}

CharacterChange::CharacterChange(std::int16_t CharIndex_, std::int16_t Body_, std::int16_t Head_, std::uint8_t Heading_, std::int16_t Weapon_, std::int16_t Shield_, std::int16_t Helmet_, std::int16_t FX_, std::int16_t FXLoops_) : ServerPacket(ServerPacketID_CharacterChange /* 34 */), CharIndex(CharIndex_), Body(Body_), Head(Head_), Heading(Heading_), Weapon(Weapon_), Shield(Shield_), Helmet(Helmet_), FX(FX_), FXLoops(FXLoops_) {
}

void CharacterChange::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_CharacterChange); /* PacketID: 34 */
    buffer->WriteInteger(CharIndex);
    buffer->WriteInteger(Body);
    buffer->WriteInteger(Head);
    buffer->WriteByte(Heading);
    buffer->WriteInteger(Weapon);
    buffer->WriteInteger(Shield);
    buffer->WriteInteger(Helmet);
    buffer->WriteInteger(FX);
    buffer->WriteInteger(FXLoops);

}

void CharacterChange::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleCharacterChange(this);
}

ObjectCreate::ObjectCreate() : ServerPacket(ServerPacketID_ObjectCreate /* 35 */), X(), Y(), GrhIndex() {
}

ObjectCreate::ObjectCreate(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ObjectCreate /* 35 */) {
    buffer->ReadByte(); /* PacketID */
    X = buffer->ReadByte();
    Y = buffer->ReadByte();
    GrhIndex = buffer->ReadInteger();

}

ObjectCreate::ObjectCreate(std::uint8_t X_, std::uint8_t Y_, std::int16_t GrhIndex_) : ServerPacket(ServerPacketID_ObjectCreate /* 35 */), X(X_), Y(Y_), GrhIndex(GrhIndex_) {
}

void ObjectCreate::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ObjectCreate); /* PacketID: 35 */
    buffer->WriteByte(X);
    buffer->WriteByte(Y);
    buffer->WriteInteger(GrhIndex);

}

void ObjectCreate::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleObjectCreate(this);
}

ObjectDelete::ObjectDelete() : ServerPacket(ServerPacketID_ObjectDelete /* 36 */), X(), Y() {
}

ObjectDelete::ObjectDelete(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ObjectDelete /* 36 */) {
    buffer->ReadByte(); /* PacketID */
    X = buffer->ReadByte();
    Y = buffer->ReadByte();

}

ObjectDelete::ObjectDelete(std::uint8_t X_, std::uint8_t Y_) : ServerPacket(ServerPacketID_ObjectDelete /* 36 */), X(X_), Y(Y_) {
}

void ObjectDelete::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ObjectDelete); /* PacketID: 36 */
    buffer->WriteByte(X);
    buffer->WriteByte(Y);

}

void ObjectDelete::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleObjectDelete(this);
}

BlockPosition::BlockPosition() : ServerPacket(ServerPacketID_BlockPosition /* 37 */), X(), Y(), Blocked() {
}

BlockPosition::BlockPosition(clsByteQueue* buffer) : ServerPacket(ServerPacketID_BlockPosition /* 37 */) {
    buffer->ReadByte(); /* PacketID */
    X = buffer->ReadByte();
    Y = buffer->ReadByte();
    Blocked = buffer->ReadBoolean();

}

BlockPosition::BlockPosition(std::uint8_t X_, std::uint8_t Y_, bool Blocked_) : ServerPacket(ServerPacketID_BlockPosition /* 37 */), X(X_), Y(Y_), Blocked(Blocked_) {
}

void BlockPosition::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_BlockPosition); /* PacketID: 37 */
    buffer->WriteByte(X);
    buffer->WriteByte(Y);
    buffer->WriteBoolean(Blocked);

}

void BlockPosition::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleBlockPosition(this);
}

PlayMidi::PlayMidi() : ServerPacket(ServerPacketID_PlayMidi /* 38 */), MidiID(), Loops() {
}

PlayMidi::PlayMidi(clsByteQueue* buffer) : ServerPacket(ServerPacketID_PlayMidi /* 38 */) {
    buffer->ReadByte(); /* PacketID */
    MidiID = buffer->ReadInteger();
    Loops = buffer->ReadInteger();

}

PlayMidi::PlayMidi(std::int16_t MidiID_, std::int16_t Loops_) : ServerPacket(ServerPacketID_PlayMidi /* 38 */), MidiID(MidiID_), Loops(Loops_) {
}

void PlayMidi::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_PlayMidi); /* PacketID: 38 */
    buffer->WriteInteger(MidiID);
    buffer->WriteInteger(Loops);

}

void PlayMidi::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handlePlayMidi(this);
}

PlayWave::PlayWave() : ServerPacket(ServerPacketID_PlayWave /* 39 */), WaveID(), X(), Y() {
}

PlayWave::PlayWave(clsByteQueue* buffer) : ServerPacket(ServerPacketID_PlayWave /* 39 */) {
    buffer->ReadByte(); /* PacketID */
    WaveID = buffer->ReadByte();
    X = buffer->ReadByte();
    Y = buffer->ReadByte();

}

PlayWave::PlayWave(std::uint8_t WaveID_, std::uint8_t X_, std::uint8_t Y_) : ServerPacket(ServerPacketID_PlayWave /* 39 */), WaveID(WaveID_), X(X_), Y(Y_) {
}

void PlayWave::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_PlayWave); /* PacketID: 39 */
    buffer->WriteByte(WaveID);
    buffer->WriteByte(X);
    buffer->WriteByte(Y);

}

void PlayWave::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handlePlayWave(this);
}

GuildList::GuildList() : ServerPacket(ServerPacketID_GuildList /* 40 */), Data() {
}

GuildList::GuildList(clsByteQueue* buffer) : ServerPacket(ServerPacketID_GuildList /* 40 */) {
    buffer->ReadByte(); /* PacketID */
    Data = buffer->ReadUnicodeString();

}

GuildList::GuildList(const std::string& Data_) : ServerPacket(ServerPacketID_GuildList /* 40 */), Data(Data_) {
}

void GuildList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_GuildList); /* PacketID: 40 */
    buffer->WriteUnicodeString(Data);

}

void GuildList::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleGuildList(this);
}

AreaChanged::AreaChanged() : ServerPacket(ServerPacketID_AreaChanged /* 41 */), X(), Y() {
}

AreaChanged::AreaChanged(clsByteQueue* buffer) : ServerPacket(ServerPacketID_AreaChanged /* 41 */) {
    buffer->ReadByte(); /* PacketID */
    X = buffer->ReadByte();
    Y = buffer->ReadByte();

}

AreaChanged::AreaChanged(std::uint8_t X_, std::uint8_t Y_) : ServerPacket(ServerPacketID_AreaChanged /* 41 */), X(X_), Y(Y_) {
}

void AreaChanged::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_AreaChanged); /* PacketID: 41 */
    buffer->WriteByte(X);
    buffer->WriteByte(Y);

}

void AreaChanged::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleAreaChanged(this);
}

PauseToggle::PauseToggle() : ServerPacket(ServerPacketID_PauseToggle /* 42 */) {
}

PauseToggle::PauseToggle(clsByteQueue* buffer) : ServerPacket(ServerPacketID_PauseToggle /* 42 */) {
    buffer->ReadByte(); /* PacketID */

}

void PauseToggle::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_PauseToggle); /* PacketID: 42 */

}

void PauseToggle::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handlePauseToggle(this);
}

RainToggle::RainToggle() : ServerPacket(ServerPacketID_RainToggle /* 43 */) {
}

RainToggle::RainToggle(clsByteQueue* buffer) : ServerPacket(ServerPacketID_RainToggle /* 43 */) {
    buffer->ReadByte(); /* PacketID */

}

void RainToggle::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_RainToggle); /* PacketID: 43 */

}

void RainToggle::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleRainToggle(this);
}

CreateFX::CreateFX() : ServerPacket(ServerPacketID_CreateFX /* 44 */), CharIndex(), FX(), FXLoops() {
}

CreateFX::CreateFX(clsByteQueue* buffer) : ServerPacket(ServerPacketID_CreateFX /* 44 */) {
    buffer->ReadByte(); /* PacketID */
    CharIndex = buffer->ReadInteger();
    FX = buffer->ReadInteger();
    FXLoops = buffer->ReadInteger();

}

CreateFX::CreateFX(std::int16_t CharIndex_, std::int16_t FX_, std::int16_t FXLoops_) : ServerPacket(ServerPacketID_CreateFX /* 44 */), CharIndex(CharIndex_), FX(FX_), FXLoops(FXLoops_) {
}

void CreateFX::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_CreateFX); /* PacketID: 44 */
    buffer->WriteInteger(CharIndex);
    buffer->WriteInteger(FX);
    buffer->WriteInteger(FXLoops);

}

void CreateFX::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleCreateFX(this);
}

UpdateUserStats::UpdateUserStats() : ServerPacket(ServerPacketID_UpdateUserStats /* 45 */), MaxHp(), MinHp(), MaxMan(), MinMan(), MaxSta(), MinSta(), Gld(), Elv(), Elu(), Exp() {
}

UpdateUserStats::UpdateUserStats(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UpdateUserStats /* 45 */) {
    buffer->ReadByte(); /* PacketID */
    MaxHp = buffer->ReadInteger();
    MinHp = buffer->ReadInteger();
    MaxMan = buffer->ReadInteger();
    MinMan = buffer->ReadInteger();
    MaxSta = buffer->ReadInteger();
    MinSta = buffer->ReadInteger();
    Gld = buffer->ReadLong();
    Elv = buffer->ReadByte();
    Elu = buffer->ReadLong();
    Exp = buffer->ReadLong();

}

UpdateUserStats::UpdateUserStats(std::int16_t MaxHp_, std::int16_t MinHp_, std::int16_t MaxMan_, std::int16_t MinMan_, std::int16_t MaxSta_, std::int16_t MinSta_, std::int32_t Gld_, std::uint8_t Elv_, std::int32_t Elu_, std::int32_t Exp_) : ServerPacket(ServerPacketID_UpdateUserStats /* 45 */), MaxHp(MaxHp_), MinHp(MinHp_), MaxMan(MaxMan_), MinMan(MinMan_), MaxSta(MaxSta_), MinSta(MinSta_), Gld(Gld_), Elv(Elv_), Elu(Elu_), Exp(Exp_) {
}

void UpdateUserStats::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UpdateUserStats); /* PacketID: 45 */
    buffer->WriteInteger(MaxHp);
    buffer->WriteInteger(MinHp);
    buffer->WriteInteger(MaxMan);
    buffer->WriteInteger(MinMan);
    buffer->WriteInteger(MaxSta);
    buffer->WriteInteger(MinSta);
    buffer->WriteLong(Gld);
    buffer->WriteByte(Elv);
    buffer->WriteLong(Elu);
    buffer->WriteLong(Exp);

}

void UpdateUserStats::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUpdateUserStats(this);
}

WorkRequestTarget::WorkRequestTarget() : ServerPacket(ServerPacketID_WorkRequestTarget /* 46 */), Skill() {
}

WorkRequestTarget::WorkRequestTarget(clsByteQueue* buffer) : ServerPacket(ServerPacketID_WorkRequestTarget /* 46 */) {
    buffer->ReadByte(); /* PacketID */
    Skill = buffer->ReadByte();

}

WorkRequestTarget::WorkRequestTarget(std::uint8_t Skill_) : ServerPacket(ServerPacketID_WorkRequestTarget /* 46 */), Skill(Skill_) {
}

void WorkRequestTarget::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_WorkRequestTarget); /* PacketID: 46 */
    buffer->WriteByte(Skill);

}

void WorkRequestTarget::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleWorkRequestTarget(this);
}

ChangeInventorySlot::ChangeInventorySlot() : ServerPacket(ServerPacketID_ChangeInventorySlot /* 47 */), Slot(), ObjIndex(), ObjName(), Amount(), Equiped(), GrhIndex(), ObjType(), MaxHit(), MinHit(), MaxDef(), MinDef(), ObjSalePrice() {
}

ChangeInventorySlot::ChangeInventorySlot(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ChangeInventorySlot /* 47 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();
    ObjIndex = buffer->ReadInteger();
    ObjName = buffer->ReadUnicodeString();
    Amount = buffer->ReadInteger();
    Equiped = buffer->ReadBoolean();
    GrhIndex = buffer->ReadInteger();
    ObjType = buffer->ReadByte();
    MaxHit = buffer->ReadInteger();
    MinHit = buffer->ReadInteger();
    MaxDef = buffer->ReadInteger();
    MinDef = buffer->ReadInteger();
    ObjSalePrice = buffer->ReadSingle();

}

ChangeInventorySlot::ChangeInventorySlot(std::uint8_t Slot_, std::int16_t ObjIndex_, const std::string& ObjName_, std::int16_t Amount_, bool Equiped_, std::int16_t GrhIndex_, std::uint8_t ObjType_, std::int16_t MaxHit_, std::int16_t MinHit_, std::int16_t MaxDef_, std::int16_t MinDef_, float ObjSalePrice_) : ServerPacket(ServerPacketID_ChangeInventorySlot /* 47 */), Slot(Slot_), ObjIndex(ObjIndex_), ObjName(ObjName_), Amount(Amount_), Equiped(Equiped_), GrhIndex(GrhIndex_), ObjType(ObjType_), MaxHit(MaxHit_), MinHit(MinHit_), MaxDef(MaxDef_), MinDef(MinDef_), ObjSalePrice(ObjSalePrice_) {
}

void ChangeInventorySlot::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ChangeInventorySlot); /* PacketID: 47 */
    buffer->WriteByte(Slot);
    buffer->WriteInteger(ObjIndex);
    buffer->WriteUnicodeString(ObjName);
    buffer->WriteInteger(Amount);
    buffer->WriteBoolean(Equiped);
    buffer->WriteInteger(GrhIndex);
    buffer->WriteByte(ObjType);
    buffer->WriteInteger(MaxHit);
    buffer->WriteInteger(MinHit);
    buffer->WriteInteger(MaxDef);
    buffer->WriteInteger(MinDef);
    buffer->WriteSingle(ObjSalePrice);

}

void ChangeInventorySlot::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleChangeInventorySlot(this);
}

ChangeBankSlot::ChangeBankSlot() : ServerPacket(ServerPacketID_ChangeBankSlot /* 48 */), Slot(), ObjIndex(), ObjName(), Amount(), GrhIndex(), ObjType(), MaxHit(), MinHit(), MaxDef(), MinDef(), ObjSalePrice() {
}

ChangeBankSlot::ChangeBankSlot(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ChangeBankSlot /* 48 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();
    ObjIndex = buffer->ReadInteger();
    ObjName = buffer->ReadUnicodeString();
    Amount = buffer->ReadInteger();
    GrhIndex = buffer->ReadInteger();
    ObjType = buffer->ReadByte();
    MaxHit = buffer->ReadInteger();
    MinHit = buffer->ReadInteger();
    MaxDef = buffer->ReadInteger();
    MinDef = buffer->ReadInteger();
    ObjSalePrice = buffer->ReadSingle();

}

ChangeBankSlot::ChangeBankSlot(std::uint8_t Slot_, std::int16_t ObjIndex_, const std::string& ObjName_, std::int16_t Amount_, std::int16_t GrhIndex_, std::uint8_t ObjType_, std::int16_t MaxHit_, std::int16_t MinHit_, std::int16_t MaxDef_, std::int16_t MinDef_, float ObjSalePrice_) : ServerPacket(ServerPacketID_ChangeBankSlot /* 48 */), Slot(Slot_), ObjIndex(ObjIndex_), ObjName(ObjName_), Amount(Amount_), GrhIndex(GrhIndex_), ObjType(ObjType_), MaxHit(MaxHit_), MinHit(MinHit_), MaxDef(MaxDef_), MinDef(MinDef_), ObjSalePrice(ObjSalePrice_) {
}

void ChangeBankSlot::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ChangeBankSlot); /* PacketID: 48 */
    buffer->WriteByte(Slot);
    buffer->WriteInteger(ObjIndex);
    buffer->WriteUnicodeString(ObjName);
    buffer->WriteInteger(Amount);
    buffer->WriteInteger(GrhIndex);
    buffer->WriteByte(ObjType);
    buffer->WriteInteger(MaxHit);
    buffer->WriteInteger(MinHit);
    buffer->WriteInteger(MaxDef);
    buffer->WriteInteger(MinDef);
    buffer->WriteSingle(ObjSalePrice);

}

void ChangeBankSlot::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleChangeBankSlot(this);
}

ChangeSpellSlot::ChangeSpellSlot() : ServerPacket(ServerPacketID_ChangeSpellSlot /* 49 */), Slot(), SpellID(), Name() {
}

ChangeSpellSlot::ChangeSpellSlot(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ChangeSpellSlot /* 49 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();
    SpellID = buffer->ReadInteger();
    Name = buffer->ReadUnicodeString();

}

ChangeSpellSlot::ChangeSpellSlot(std::uint8_t Slot_, std::int16_t SpellID_, const std::string& Name_) : ServerPacket(ServerPacketID_ChangeSpellSlot /* 49 */), Slot(Slot_), SpellID(SpellID_), Name(Name_) {
}

void ChangeSpellSlot::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ChangeSpellSlot); /* PacketID: 49 */
    buffer->WriteByte(Slot);
    buffer->WriteInteger(SpellID);
    buffer->WriteUnicodeString(Name);

}

void ChangeSpellSlot::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleChangeSpellSlot(this);
}

Atributes::Atributes() : ServerPacket(ServerPacketID_Atributes /* 50 */), Fuerza(), Agilidad(), Inteligencia(), Carisma(), Constitucion() {
}

Atributes::Atributes(clsByteQueue* buffer) : ServerPacket(ServerPacketID_Atributes /* 50 */) {
    buffer->ReadByte(); /* PacketID */
    Fuerza = buffer->ReadByte();
    Agilidad = buffer->ReadByte();
    Inteligencia = buffer->ReadByte();
    Carisma = buffer->ReadByte();
    Constitucion = buffer->ReadByte();

}

Atributes::Atributes(std::uint8_t Fuerza_, std::uint8_t Agilidad_, std::uint8_t Inteligencia_, std::uint8_t Carisma_, std::uint8_t Constitucion_) : ServerPacket(ServerPacketID_Atributes /* 50 */), Fuerza(Fuerza_), Agilidad(Agilidad_), Inteligencia(Inteligencia_), Carisma(Carisma_), Constitucion(Constitucion_) {
}

void Atributes::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_Atributes); /* PacketID: 50 */
    buffer->WriteByte(Fuerza);
    buffer->WriteByte(Agilidad);
    buffer->WriteByte(Inteligencia);
    buffer->WriteByte(Carisma);
    buffer->WriteByte(Constitucion);

}

void Atributes::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleAtributes(this);
}

BlacksmithWeapons::BlacksmithWeapons() : ServerPacket(ServerPacketID_BlacksmithWeapons /* 51 */) {
}

BlacksmithWeapons::BlacksmithWeapons(clsByteQueue* buffer) : ServerPacket(ServerPacketID_BlacksmithWeapons /* 51 */) {
    buffer->ReadByte(); /* PacketID */
    std::int32_t Count = buffer->ReadInteger();
    { std::int32_t i; 
        for (i=0; i<Count; ++i) {
            Item e;
            e.Name = buffer->ReadUnicodeString();
            e.GrhIndex = buffer->ReadInteger();
            e.LingH = buffer->ReadInteger();
            e.LingP = buffer->ReadInteger();
            e.LingO = buffer->ReadInteger();
            e.ArmasHerreroIndex = buffer->ReadInteger();
            e.ObjUpgrade = buffer->ReadInteger();

            Items.push_back(e);
        }
    }
}

void BlacksmithWeapons::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_BlacksmithWeapons); /* PacketID: 51 */
    std::int32_t Count = static_cast<std::int32_t>(Items.size());
    buffer->WriteInteger(Count);
    { std::int32_t i; 
        for (i=0; i<Count; ++i) {
            const Item &e = Items[i];
            buffer->WriteUnicodeString(e.Name);
            buffer->WriteInteger(e.GrhIndex);
            buffer->WriteInteger(e.LingH);
            buffer->WriteInteger(e.LingP);
            buffer->WriteInteger(e.LingO);
            buffer->WriteInteger(e.ArmasHerreroIndex);
            buffer->WriteInteger(e.ObjUpgrade);

        }
    }
}

void BlacksmithWeapons::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleBlacksmithWeapons(this);
}

BlacksmithArmors::BlacksmithArmors() : ServerPacket(ServerPacketID_BlacksmithArmors /* 52 */) {
}

BlacksmithArmors::BlacksmithArmors(clsByteQueue* buffer) : ServerPacket(ServerPacketID_BlacksmithArmors /* 52 */) {
    buffer->ReadByte(); /* PacketID */
    std::int32_t Count = buffer->ReadInteger();
    { std::int32_t i; 
        for (i=0; i<Count; ++i) {
            Item e;
            e.Name = buffer->ReadUnicodeString();
            e.GrhIndex = buffer->ReadInteger();
            e.LingH = buffer->ReadInteger();
            e.LingP = buffer->ReadInteger();
            e.LingO = buffer->ReadInteger();
            e.ArmasHerreroIndex = buffer->ReadInteger();
            e.ObjUpgrade = buffer->ReadInteger();

            Items.push_back(e);
        }
    }
}

void BlacksmithArmors::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_BlacksmithArmors); /* PacketID: 52 */
    std::int32_t Count = static_cast<std::int32_t>(Items.size());
    buffer->WriteInteger(Count);
    { std::int32_t i; 
        for (i=0; i<Count; ++i) {
            const Item &e = Items[i];
            buffer->WriteUnicodeString(e.Name);
            buffer->WriteInteger(e.GrhIndex);
            buffer->WriteInteger(e.LingH);
            buffer->WriteInteger(e.LingP);
            buffer->WriteInteger(e.LingO);
            buffer->WriteInteger(e.ArmasHerreroIndex);
            buffer->WriteInteger(e.ObjUpgrade);

        }
    }
}

void BlacksmithArmors::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleBlacksmithArmors(this);
}

CarpenterObjects::CarpenterObjects() : ServerPacket(ServerPacketID_CarpenterObjects /* 53 */) {
}

CarpenterObjects::CarpenterObjects(clsByteQueue* buffer) : ServerPacket(ServerPacketID_CarpenterObjects /* 53 */) {
    buffer->ReadByte(); /* PacketID */
    std::int32_t Count = buffer->ReadInteger();
    { std::int32_t i; 
        for (i=0; i<Count; ++i) {
            Item e;
            e.Name = buffer->ReadUnicodeString();
            e.GrhIndex = buffer->ReadInteger();
            e.Madera = buffer->ReadInteger();
            e.MaderaElfica = buffer->ReadInteger();
            e.ObjCarpinteroIndex = buffer->ReadInteger();
            e.ObjUpgrade = buffer->ReadInteger();

            Items.push_back(e);
        }
    }
}

void CarpenterObjects::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_CarpenterObjects); /* PacketID: 53 */
    std::int32_t Count = static_cast<std::int32_t>(Items.size());
    buffer->WriteInteger(Count);
    { std::int32_t i; 
        for (i=0; i<Count; ++i) {
            const Item &e = Items[i];
            buffer->WriteUnicodeString(e.Name);
            buffer->WriteInteger(e.GrhIndex);
            buffer->WriteInteger(e.Madera);
            buffer->WriteInteger(e.MaderaElfica);
            buffer->WriteInteger(e.ObjCarpinteroIndex);
            buffer->WriteInteger(e.ObjUpgrade);

        }
    }
}

void CarpenterObjects::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleCarpenterObjects(this);
}

RestOK::RestOK() : ServerPacket(ServerPacketID_RestOK /* 54 */) {
}

RestOK::RestOK(clsByteQueue* buffer) : ServerPacket(ServerPacketID_RestOK /* 54 */) {
    buffer->ReadByte(); /* PacketID */

}

void RestOK::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_RestOK); /* PacketID: 54 */

}

void RestOK::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleRestOK(this);
}

ErrorMsg::ErrorMsg() : ServerPacket(ServerPacketID_ErrorMsg /* 55 */), Message() {
}

ErrorMsg::ErrorMsg(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ErrorMsg /* 55 */) {
    buffer->ReadByte(); /* PacketID */
    Message = buffer->ReadUnicodeString();

}

ErrorMsg::ErrorMsg(const std::string& Message_) : ServerPacket(ServerPacketID_ErrorMsg /* 55 */), Message(Message_) {
}

void ErrorMsg::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ErrorMsg); /* PacketID: 55 */
    buffer->WriteUnicodeString(Message);

}

void ErrorMsg::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleErrorMsg(this);
}

Blind::Blind() : ServerPacket(ServerPacketID_Blind /* 56 */) {
}

Blind::Blind(clsByteQueue* buffer) : ServerPacket(ServerPacketID_Blind /* 56 */) {
    buffer->ReadByte(); /* PacketID */

}

void Blind::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_Blind); /* PacketID: 56 */

}

void Blind::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleBlind(this);
}

Dumb::Dumb() : ServerPacket(ServerPacketID_Dumb /* 57 */) {
}

Dumb::Dumb(clsByteQueue* buffer) : ServerPacket(ServerPacketID_Dumb /* 57 */) {
    buffer->ReadByte(); /* PacketID */

}

void Dumb::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_Dumb); /* PacketID: 57 */

}

void Dumb::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleDumb(this);
}

ShowSignal::ShowSignal() : ServerPacket(ServerPacketID_ShowSignal /* 58 */), Texto(), Grh() {
}

ShowSignal::ShowSignal(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ShowSignal /* 58 */) {
    buffer->ReadByte(); /* PacketID */
    Texto = buffer->ReadUnicodeString();
    Grh = buffer->ReadInteger();

}

ShowSignal::ShowSignal(const std::string& Texto_, std::int16_t Grh_) : ServerPacket(ServerPacketID_ShowSignal /* 58 */), Texto(Texto_), Grh(Grh_) {
}

void ShowSignal::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ShowSignal); /* PacketID: 58 */
    buffer->WriteUnicodeString(Texto);
    buffer->WriteInteger(Grh);

}

void ShowSignal::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleShowSignal(this);
}

ChangeNPCInventorySlot::ChangeNPCInventorySlot() : ServerPacket(ServerPacketID_ChangeNPCInventorySlot /* 59 */), Slot(), ObjName(), Amount(), Price(), GrhIndex(), ObjIndex(), ObjType(), MaxHit(), MinHit(), MaxDef(), MinDef() {
}

ChangeNPCInventorySlot::ChangeNPCInventorySlot(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ChangeNPCInventorySlot /* 59 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();
    ObjName = buffer->ReadUnicodeString();
    Amount = buffer->ReadInteger();
    Price = buffer->ReadSingle();
    GrhIndex = buffer->ReadInteger();
    ObjIndex = buffer->ReadInteger();
    ObjType = buffer->ReadByte();
    MaxHit = buffer->ReadInteger();
    MinHit = buffer->ReadInteger();
    MaxDef = buffer->ReadInteger();
    MinDef = buffer->ReadInteger();

}

ChangeNPCInventorySlot::ChangeNPCInventorySlot(std::uint8_t Slot_, const std::string& ObjName_, std::int16_t Amount_, float Price_, std::int16_t GrhIndex_, std::int16_t ObjIndex_, std::uint8_t ObjType_, std::int16_t MaxHit_, std::int16_t MinHit_, std::int16_t MaxDef_, std::int16_t MinDef_) : ServerPacket(ServerPacketID_ChangeNPCInventorySlot /* 59 */), Slot(Slot_), ObjName(ObjName_), Amount(Amount_), Price(Price_), GrhIndex(GrhIndex_), ObjIndex(ObjIndex_), ObjType(ObjType_), MaxHit(MaxHit_), MinHit(MinHit_), MaxDef(MaxDef_), MinDef(MinDef_) {
}

void ChangeNPCInventorySlot::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ChangeNPCInventorySlot); /* PacketID: 59 */
    buffer->WriteByte(Slot);
    buffer->WriteUnicodeString(ObjName);
    buffer->WriteInteger(Amount);
    buffer->WriteSingle(Price);
    buffer->WriteInteger(GrhIndex);
    buffer->WriteInteger(ObjIndex);
    buffer->WriteByte(ObjType);
    buffer->WriteInteger(MaxHit);
    buffer->WriteInteger(MinHit);
    buffer->WriteInteger(MaxDef);
    buffer->WriteInteger(MinDef);

}

void ChangeNPCInventorySlot::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleChangeNPCInventorySlot(this);
}

UpdateHungerAndThirst::UpdateHungerAndThirst() : ServerPacket(ServerPacketID_UpdateHungerAndThirst /* 60 */), MaxAgu(), MinAgu(), MaxHam(), MinHam() {
}

UpdateHungerAndThirst::UpdateHungerAndThirst(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UpdateHungerAndThirst /* 60 */) {
    buffer->ReadByte(); /* PacketID */
    MaxAgu = buffer->ReadByte();
    MinAgu = buffer->ReadByte();
    MaxHam = buffer->ReadByte();
    MinHam = buffer->ReadByte();

}

UpdateHungerAndThirst::UpdateHungerAndThirst(std::uint8_t MaxAgu_, std::uint8_t MinAgu_, std::uint8_t MaxHam_, std::uint8_t MinHam_) : ServerPacket(ServerPacketID_UpdateHungerAndThirst /* 60 */), MaxAgu(MaxAgu_), MinAgu(MinAgu_), MaxHam(MaxHam_), MinHam(MinHam_) {
}

void UpdateHungerAndThirst::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UpdateHungerAndThirst); /* PacketID: 60 */
    buffer->WriteByte(MaxAgu);
    buffer->WriteByte(MinAgu);
    buffer->WriteByte(MaxHam);
    buffer->WriteByte(MinHam);

}

void UpdateHungerAndThirst::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUpdateHungerAndThirst(this);
}

Fame::Fame() : ServerPacket(ServerPacketID_Fame /* 61 */), Asesino(), Bandido(), Burgues(), Ladron(), Noble(), Plebe(), Promedio() {
}

Fame::Fame(clsByteQueue* buffer) : ServerPacket(ServerPacketID_Fame /* 61 */) {
    buffer->ReadByte(); /* PacketID */
    Asesino = buffer->ReadLong();
    Bandido = buffer->ReadLong();
    Burgues = buffer->ReadLong();
    Ladron = buffer->ReadLong();
    Noble = buffer->ReadLong();
    Plebe = buffer->ReadLong();
    Promedio = buffer->ReadLong();

}

Fame::Fame(std::int32_t Asesino_, std::int32_t Bandido_, std::int32_t Burgues_, std::int32_t Ladron_, std::int32_t Noble_, std::int32_t Plebe_, std::int32_t Promedio_) : ServerPacket(ServerPacketID_Fame /* 61 */), Asesino(Asesino_), Bandido(Bandido_), Burgues(Burgues_), Ladron(Ladron_), Noble(Noble_), Plebe(Plebe_), Promedio(Promedio_) {
}

void Fame::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_Fame); /* PacketID: 61 */
    buffer->WriteLong(Asesino);
    buffer->WriteLong(Bandido);
    buffer->WriteLong(Burgues);
    buffer->WriteLong(Ladron);
    buffer->WriteLong(Noble);
    buffer->WriteLong(Plebe);
    buffer->WriteLong(Promedio);

}

void Fame::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleFame(this);
}

MiniStats::MiniStats() : ServerPacket(ServerPacketID_MiniStats /* 62 */), CiudadanosMatados(), CriminalesMatados(), UsuariosMatados(), NpcsMuertos(), Clase(), Pena() {
}

MiniStats::MiniStats(clsByteQueue* buffer) : ServerPacket(ServerPacketID_MiniStats /* 62 */) {
    buffer->ReadByte(); /* PacketID */
    CiudadanosMatados = buffer->ReadLong();
    CriminalesMatados = buffer->ReadLong();
    UsuariosMatados = buffer->ReadLong();
    NpcsMuertos = buffer->ReadInteger();
    Clase = buffer->ReadByte();
    Pena = buffer->ReadLong();

}

MiniStats::MiniStats(std::int32_t CiudadanosMatados_, std::int32_t CriminalesMatados_, std::int32_t UsuariosMatados_, std::int16_t NpcsMuertos_, std::uint8_t Clase_, std::int32_t Pena_) : ServerPacket(ServerPacketID_MiniStats /* 62 */), CiudadanosMatados(CiudadanosMatados_), CriminalesMatados(CriminalesMatados_), UsuariosMatados(UsuariosMatados_), NpcsMuertos(NpcsMuertos_), Clase(Clase_), Pena(Pena_) {
}

void MiniStats::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_MiniStats); /* PacketID: 62 */
    buffer->WriteLong(CiudadanosMatados);
    buffer->WriteLong(CriminalesMatados);
    buffer->WriteLong(UsuariosMatados);
    buffer->WriteInteger(NpcsMuertos);
    buffer->WriteByte(Clase);
    buffer->WriteLong(Pena);

}

void MiniStats::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleMiniStats(this);
}

LevelUp::LevelUp() : ServerPacket(ServerPacketID_LevelUp /* 63 */), SkillPoints() {
}

LevelUp::LevelUp(clsByteQueue* buffer) : ServerPacket(ServerPacketID_LevelUp /* 63 */) {
    buffer->ReadByte(); /* PacketID */
    SkillPoints = buffer->ReadInteger();

}

LevelUp::LevelUp(std::int16_t SkillPoints_) : ServerPacket(ServerPacketID_LevelUp /* 63 */), SkillPoints(SkillPoints_) {
}

void LevelUp::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_LevelUp); /* PacketID: 63 */
    buffer->WriteInteger(SkillPoints);

}

void LevelUp::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleLevelUp(this);
}

AddForumMsg::AddForumMsg() : ServerPacket(ServerPacketID_AddForumMsg /* 64 */), ForumType(), Title(), Author(), Message() {
}

AddForumMsg::AddForumMsg(clsByteQueue* buffer) : ServerPacket(ServerPacketID_AddForumMsg /* 64 */) {
    buffer->ReadByte(); /* PacketID */
    ForumType = buffer->ReadLong();
    Title = buffer->ReadUnicodeString();
    Author = buffer->ReadUnicodeString();
    Message = buffer->ReadUnicodeString();

}

AddForumMsg::AddForumMsg(std::int32_t ForumType_, const std::string& Title_, const std::string& Author_, const std::string& Message_) : ServerPacket(ServerPacketID_AddForumMsg /* 64 */), ForumType(ForumType_), Title(Title_), Author(Author_), Message(Message_) {
}

void AddForumMsg::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_AddForumMsg); /* PacketID: 64 */
    buffer->WriteLong(ForumType);
    buffer->WriteUnicodeString(Title);
    buffer->WriteUnicodeString(Author);
    buffer->WriteUnicodeString(Message);

}

void AddForumMsg::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleAddForumMsg(this);
}

ShowForumForm::ShowForumForm() : ServerPacket(ServerPacketID_ShowForumForm /* 65 */), Visibilidad(), CanMakeSticky() {
}

ShowForumForm::ShowForumForm(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ShowForumForm /* 65 */) {
    buffer->ReadByte(); /* PacketID */
    Visibilidad = buffer->ReadByte();
    CanMakeSticky = buffer->ReadByte();

}

ShowForumForm::ShowForumForm(std::uint8_t Visibilidad_, std::uint8_t CanMakeSticky_) : ServerPacket(ServerPacketID_ShowForumForm /* 65 */), Visibilidad(Visibilidad_), CanMakeSticky(CanMakeSticky_) {
}

void ShowForumForm::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ShowForumForm); /* PacketID: 65 */
    buffer->WriteByte(Visibilidad);
    buffer->WriteByte(CanMakeSticky);

}

void ShowForumForm::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleShowForumForm(this);
}

SetInvisible::SetInvisible() : ServerPacket(ServerPacketID_SetInvisible /* 66 */), charIndex(), invisible() {
}

SetInvisible::SetInvisible(clsByteQueue* buffer) : ServerPacket(ServerPacketID_SetInvisible /* 66 */) {
    buffer->ReadByte(); /* PacketID */
    charIndex = buffer->ReadInteger();
    invisible = buffer->ReadBoolean();

}

SetInvisible::SetInvisible(std::int16_t charIndex_, bool invisible_) : ServerPacket(ServerPacketID_SetInvisible /* 66 */), charIndex(charIndex_), invisible(invisible_) {
}

void SetInvisible::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_SetInvisible); /* PacketID: 66 */
    buffer->WriteInteger(charIndex);
    buffer->WriteBoolean(invisible);

}

void SetInvisible::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleSetInvisible(this);
}

DiceRoll::DiceRoll() : ServerPacket(ServerPacketID_DiceRoll /* 67 */), Fuerza(), Agilidad(), Inteligencia(), Carisma(), Constitucion() {
}

DiceRoll::DiceRoll(clsByteQueue* buffer) : ServerPacket(ServerPacketID_DiceRoll /* 67 */) {
    buffer->ReadByte(); /* PacketID */
    Fuerza = buffer->ReadByte();
    Agilidad = buffer->ReadByte();
    Inteligencia = buffer->ReadByte();
    Carisma = buffer->ReadByte();
    Constitucion = buffer->ReadByte();

}

DiceRoll::DiceRoll(std::uint8_t Fuerza_, std::uint8_t Agilidad_, std::uint8_t Inteligencia_, std::uint8_t Carisma_, std::uint8_t Constitucion_) : ServerPacket(ServerPacketID_DiceRoll /* 67 */), Fuerza(Fuerza_), Agilidad(Agilidad_), Inteligencia(Inteligencia_), Carisma(Carisma_), Constitucion(Constitucion_) {
}

void DiceRoll::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_DiceRoll); /* PacketID: 67 */
    buffer->WriteByte(Fuerza);
    buffer->WriteByte(Agilidad);
    buffer->WriteByte(Inteligencia);
    buffer->WriteByte(Carisma);
    buffer->WriteByte(Constitucion);

}

void DiceRoll::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleDiceRoll(this);
}

MeditateToggle::MeditateToggle() : ServerPacket(ServerPacketID_MeditateToggle /* 68 */) {
}

MeditateToggle::MeditateToggle(clsByteQueue* buffer) : ServerPacket(ServerPacketID_MeditateToggle /* 68 */) {
    buffer->ReadByte(); /* PacketID */

}

void MeditateToggle::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_MeditateToggle); /* PacketID: 68 */

}

void MeditateToggle::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleMeditateToggle(this);
}

BlindNoMore::BlindNoMore() : ServerPacket(ServerPacketID_BlindNoMore /* 69 */) {
}

BlindNoMore::BlindNoMore(clsByteQueue* buffer) : ServerPacket(ServerPacketID_BlindNoMore /* 69 */) {
    buffer->ReadByte(); /* PacketID */

}

void BlindNoMore::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_BlindNoMore); /* PacketID: 69 */

}

void BlindNoMore::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleBlindNoMore(this);
}

DumbNoMore::DumbNoMore() : ServerPacket(ServerPacketID_DumbNoMore /* 70 */) {
}

DumbNoMore::DumbNoMore(clsByteQueue* buffer) : ServerPacket(ServerPacketID_DumbNoMore /* 70 */) {
    buffer->ReadByte(); /* PacketID */

}

void DumbNoMore::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_DumbNoMore); /* PacketID: 70 */

}

void DumbNoMore::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleDumbNoMore(this);
}

SendSkills::SendSkills() : ServerPacket(ServerPacketID_SendSkills /* 71 */), Skills() {
}

SendSkills::SendSkills(clsByteQueue* buffer) : ServerPacket(ServerPacketID_SendSkills /* 71 */) {
    buffer->ReadByte(); /* PacketID */
    { int i; Skills.resize(40); for (i=0; i<40; ++i) Skills[i] = buffer->ReadByte(); }

}

SendSkills::SendSkills(std::vector<std::uint8_t> Skills_ ) : ServerPacket(ServerPacketID_SendSkills /* 71 */), Skills(Skills_) {
}

void SendSkills::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_SendSkills); /* PacketID: 71 */
    { int i; for (i=0; i<40; ++i) buffer->WriteByte(Skills[i]); }

}

void SendSkills::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleSendSkills(this);
}

TrainerCreatureList::TrainerCreatureList() : ServerPacket(ServerPacketID_TrainerCreatureList /* 72 */), Data() {
}

TrainerCreatureList::TrainerCreatureList(clsByteQueue* buffer) : ServerPacket(ServerPacketID_TrainerCreatureList /* 72 */) {
    buffer->ReadByte(); /* PacketID */
    Data = buffer->ReadUnicodeString();

}

TrainerCreatureList::TrainerCreatureList(const std::string& Data_) : ServerPacket(ServerPacketID_TrainerCreatureList /* 72 */), Data(Data_) {
}

void TrainerCreatureList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_TrainerCreatureList); /* PacketID: 72 */
    buffer->WriteUnicodeString(Data);

}

void TrainerCreatureList::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleTrainerCreatureList(this);
}

GuildNews::GuildNews() : ServerPacket(ServerPacketID_GuildNews /* 73 */), News(), EnemiesList(), AlliesList() {
}

GuildNews::GuildNews(clsByteQueue* buffer) : ServerPacket(ServerPacketID_GuildNews /* 73 */) {
    buffer->ReadByte(); /* PacketID */
    News = buffer->ReadUnicodeString();
    EnemiesList = buffer->ReadUnicodeString();
    AlliesList = buffer->ReadUnicodeString();

}

GuildNews::GuildNews(const std::string& News_, const std::string& EnemiesList_, const std::string& AlliesList_) : ServerPacket(ServerPacketID_GuildNews /* 73 */), News(News_), EnemiesList(EnemiesList_), AlliesList(AlliesList_) {
}

void GuildNews::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_GuildNews); /* PacketID: 73 */
    buffer->WriteUnicodeString(News);
    buffer->WriteUnicodeString(EnemiesList);
    buffer->WriteUnicodeString(AlliesList);

}

void GuildNews::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleGuildNews(this);
}

OfferDetails::OfferDetails() : ServerPacket(ServerPacketID_OfferDetails /* 74 */), Details() {
}

OfferDetails::OfferDetails(clsByteQueue* buffer) : ServerPacket(ServerPacketID_OfferDetails /* 74 */) {
    buffer->ReadByte(); /* PacketID */
    Details = buffer->ReadUnicodeString();

}

OfferDetails::OfferDetails(const std::string& Details_) : ServerPacket(ServerPacketID_OfferDetails /* 74 */), Details(Details_) {
}

void OfferDetails::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_OfferDetails); /* PacketID: 74 */
    buffer->WriteUnicodeString(Details);

}

void OfferDetails::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleOfferDetails(this);
}

AlianceProposalsList::AlianceProposalsList() : ServerPacket(ServerPacketID_AlianceProposalsList /* 75 */), Data() {
}

AlianceProposalsList::AlianceProposalsList(clsByteQueue* buffer) : ServerPacket(ServerPacketID_AlianceProposalsList /* 75 */) {
    buffer->ReadByte(); /* PacketID */
    Data = buffer->ReadUnicodeString();

}

AlianceProposalsList::AlianceProposalsList(const std::string& Data_) : ServerPacket(ServerPacketID_AlianceProposalsList /* 75 */), Data(Data_) {
}

void AlianceProposalsList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_AlianceProposalsList); /* PacketID: 75 */
    buffer->WriteUnicodeString(Data);

}

void AlianceProposalsList::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleAlianceProposalsList(this);
}

PeaceProposalsList::PeaceProposalsList() : ServerPacket(ServerPacketID_PeaceProposalsList /* 76 */), Data() {
}

PeaceProposalsList::PeaceProposalsList(clsByteQueue* buffer) : ServerPacket(ServerPacketID_PeaceProposalsList /* 76 */) {
    buffer->ReadByte(); /* PacketID */
    Data = buffer->ReadUnicodeString();

}

PeaceProposalsList::PeaceProposalsList(const std::string& Data_) : ServerPacket(ServerPacketID_PeaceProposalsList /* 76 */), Data(Data_) {
}

void PeaceProposalsList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_PeaceProposalsList); /* PacketID: 76 */
    buffer->WriteUnicodeString(Data);

}

void PeaceProposalsList::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handlePeaceProposalsList(this);
}

CharacterInfo::CharacterInfo() : ServerPacket(ServerPacketID_CharacterInfo /* 77 */), CharName(), Race(), Class(), Gender(), Level(), Gold(), Bank(), Reputation(), PreviousPetitions(), CurrentGuild(), PreviousGuilds(), RoyalArmy(), ChaosLegion(), CiudadanosMatados(), CriminalesMatados() {
}

CharacterInfo::CharacterInfo(clsByteQueue* buffer) : ServerPacket(ServerPacketID_CharacterInfo /* 77 */) {
    buffer->ReadByte(); /* PacketID */
    CharName = buffer->ReadUnicodeString();
    Race = buffer->ReadByte();
    Class = buffer->ReadByte();
    Gender = buffer->ReadByte();
    Level = buffer->ReadByte();
    Gold = buffer->ReadLong();
    Bank = buffer->ReadLong();
    Reputation = buffer->ReadLong();
    PreviousPetitions = buffer->ReadUnicodeString();
    CurrentGuild = buffer->ReadUnicodeString();
    PreviousGuilds = buffer->ReadUnicodeString();
    RoyalArmy = buffer->ReadBoolean();
    ChaosLegion = buffer->ReadBoolean();
    CiudadanosMatados = buffer->ReadLong();
    CriminalesMatados = buffer->ReadLong();

}

CharacterInfo::CharacterInfo(const std::string& CharName_, std::uint8_t Race_, std::uint8_t Class_, std::uint8_t Gender_, std::uint8_t Level_, std::int32_t Gold_, std::int32_t Bank_, std::int32_t Reputation_, const std::string& PreviousPetitions_, const std::string& CurrentGuild_, const std::string& PreviousGuilds_, bool RoyalArmy_, bool ChaosLegion_, std::int32_t CiudadanosMatados_, std::int32_t CriminalesMatados_) : ServerPacket(ServerPacketID_CharacterInfo /* 77 */), CharName(CharName_), Race(Race_), Class(Class_), Gender(Gender_), Level(Level_), Gold(Gold_), Bank(Bank_), Reputation(Reputation_), PreviousPetitions(PreviousPetitions_), CurrentGuild(CurrentGuild_), PreviousGuilds(PreviousGuilds_), RoyalArmy(RoyalArmy_), ChaosLegion(ChaosLegion_), CiudadanosMatados(CiudadanosMatados_), CriminalesMatados(CriminalesMatados_) {
}

void CharacterInfo::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_CharacterInfo); /* PacketID: 77 */
    buffer->WriteUnicodeString(CharName);
    buffer->WriteByte(Race);
    buffer->WriteByte(Class);
    buffer->WriteByte(Gender);
    buffer->WriteByte(Level);
    buffer->WriteLong(Gold);
    buffer->WriteLong(Bank);
    buffer->WriteLong(Reputation);
    buffer->WriteUnicodeString(PreviousPetitions);
    buffer->WriteUnicodeString(CurrentGuild);
    buffer->WriteUnicodeString(PreviousGuilds);
    buffer->WriteBoolean(RoyalArmy);
    buffer->WriteBoolean(ChaosLegion);
    buffer->WriteLong(CiudadanosMatados);
    buffer->WriteLong(CriminalesMatados);

}

void CharacterInfo::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleCharacterInfo(this);
}

GuildLeaderInfo::GuildLeaderInfo() : ServerPacket(ServerPacketID_GuildLeaderInfo /* 78 */), GuildList(), MemberList(), GuildNews(), JoinRequests() {
}

GuildLeaderInfo::GuildLeaderInfo(clsByteQueue* buffer) : ServerPacket(ServerPacketID_GuildLeaderInfo /* 78 */) {
    buffer->ReadByte(); /* PacketID */
    GuildList = buffer->ReadUnicodeString();
    MemberList = buffer->ReadUnicodeString();
    GuildNews = buffer->ReadUnicodeString();
    JoinRequests = buffer->ReadUnicodeString();

}

GuildLeaderInfo::GuildLeaderInfo(const std::string& GuildList_, const std::string& MemberList_, const std::string& GuildNews_, const std::string& JoinRequests_) : ServerPacket(ServerPacketID_GuildLeaderInfo /* 78 */), GuildList(GuildList_), MemberList(MemberList_), GuildNews(GuildNews_), JoinRequests(JoinRequests_) {
}

void GuildLeaderInfo::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_GuildLeaderInfo); /* PacketID: 78 */
    buffer->WriteUnicodeString(GuildList);
    buffer->WriteUnicodeString(MemberList);
    buffer->WriteUnicodeString(GuildNews);
    buffer->WriteUnicodeString(JoinRequests);

}

void GuildLeaderInfo::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleGuildLeaderInfo(this);
}

GuildMemberInfo::GuildMemberInfo() : ServerPacket(ServerPacketID_GuildMemberInfo /* 79 */), GuildList(), MemberList() {
}

GuildMemberInfo::GuildMemberInfo(clsByteQueue* buffer) : ServerPacket(ServerPacketID_GuildMemberInfo /* 79 */) {
    buffer->ReadByte(); /* PacketID */
    GuildList = buffer->ReadUnicodeString();
    MemberList = buffer->ReadUnicodeString();

}

GuildMemberInfo::GuildMemberInfo(const std::string& GuildList_, const std::string& MemberList_) : ServerPacket(ServerPacketID_GuildMemberInfo /* 79 */), GuildList(GuildList_), MemberList(MemberList_) {
}

void GuildMemberInfo::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_GuildMemberInfo); /* PacketID: 79 */
    buffer->WriteUnicodeString(GuildList);
    buffer->WriteUnicodeString(MemberList);

}

void GuildMemberInfo::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleGuildMemberInfo(this);
}

GuildDetails::GuildDetails() : ServerPacket(ServerPacketID_GuildDetails /* 80 */), GuildName(), Founder(), FoundationDate(), Leader(), URL(), MemberCount(), ElectionsOpen(), Aligment(), EnemiesCount(), AlliesCount(), AntifactionPoints(), Codex(), GuildDesc() {
}

GuildDetails::GuildDetails(clsByteQueue* buffer) : ServerPacket(ServerPacketID_GuildDetails /* 80 */) {
    buffer->ReadByte(); /* PacketID */
    GuildName = buffer->ReadUnicodeString();
    Founder = buffer->ReadUnicodeString();
    FoundationDate = buffer->ReadUnicodeString();
    Leader = buffer->ReadUnicodeString();
    URL = buffer->ReadUnicodeString();
    MemberCount = buffer->ReadInteger();
    ElectionsOpen = buffer->ReadBoolean();
    Aligment = buffer->ReadUnicodeString();
    EnemiesCount = buffer->ReadInteger();
    AlliesCount = buffer->ReadInteger();
    AntifactionPoints = buffer->ReadUnicodeString();
    Codex = buffer->ReadUnicodeString();
    GuildDesc = buffer->ReadUnicodeString();

}

GuildDetails::GuildDetails(const std::string& GuildName_, const std::string& Founder_, const std::string& FoundationDate_, const std::string& Leader_, const std::string& URL_, std::int16_t MemberCount_, bool ElectionsOpen_, const std::string& Aligment_, std::int16_t EnemiesCount_, std::int16_t AlliesCount_, const std::string& AntifactionPoints_, const std::string& Codex_, const std::string& GuildDesc_) : ServerPacket(ServerPacketID_GuildDetails /* 80 */), GuildName(GuildName_), Founder(Founder_), FoundationDate(FoundationDate_), Leader(Leader_), URL(URL_), MemberCount(MemberCount_), ElectionsOpen(ElectionsOpen_), Aligment(Aligment_), EnemiesCount(EnemiesCount_), AlliesCount(AlliesCount_), AntifactionPoints(AntifactionPoints_), Codex(Codex_), GuildDesc(GuildDesc_) {
}

void GuildDetails::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_GuildDetails); /* PacketID: 80 */
    buffer->WriteUnicodeString(GuildName);
    buffer->WriteUnicodeString(Founder);
    buffer->WriteUnicodeString(FoundationDate);
    buffer->WriteUnicodeString(Leader);
    buffer->WriteUnicodeString(URL);
    buffer->WriteInteger(MemberCount);
    buffer->WriteBoolean(ElectionsOpen);
    buffer->WriteUnicodeString(Aligment);
    buffer->WriteInteger(EnemiesCount);
    buffer->WriteInteger(AlliesCount);
    buffer->WriteUnicodeString(AntifactionPoints);
    buffer->WriteUnicodeString(Codex);
    buffer->WriteUnicodeString(GuildDesc);

}

void GuildDetails::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleGuildDetails(this);
}

ShowGuildFundationForm::ShowGuildFundationForm() : ServerPacket(ServerPacketID_ShowGuildFundationForm /* 81 */) {
}

ShowGuildFundationForm::ShowGuildFundationForm(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ShowGuildFundationForm /* 81 */) {
    buffer->ReadByte(); /* PacketID */

}

void ShowGuildFundationForm::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ShowGuildFundationForm); /* PacketID: 81 */

}

void ShowGuildFundationForm::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleShowGuildFundationForm(this);
}

ParalizeOK::ParalizeOK() : ServerPacket(ServerPacketID_ParalizeOK /* 82 */) {
}

ParalizeOK::ParalizeOK(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ParalizeOK /* 82 */) {
    buffer->ReadByte(); /* PacketID */

}

void ParalizeOK::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ParalizeOK); /* PacketID: 82 */

}

void ParalizeOK::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleParalizeOK(this);
}

ShowUserRequest::ShowUserRequest() : ServerPacket(ServerPacketID_ShowUserRequest /* 83 */), Details() {
}

ShowUserRequest::ShowUserRequest(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ShowUserRequest /* 83 */) {
    buffer->ReadByte(); /* PacketID */
    Details = buffer->ReadUnicodeString();

}

ShowUserRequest::ShowUserRequest(const std::string& Details_) : ServerPacket(ServerPacketID_ShowUserRequest /* 83 */), Details(Details_) {
}

void ShowUserRequest::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ShowUserRequest); /* PacketID: 83 */
    buffer->WriteUnicodeString(Details);

}

void ShowUserRequest::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleShowUserRequest(this);
}

TradeOK::TradeOK() : ServerPacket(ServerPacketID_TradeOK /* 84 */) {
}

TradeOK::TradeOK(clsByteQueue* buffer) : ServerPacket(ServerPacketID_TradeOK /* 84 */) {
    buffer->ReadByte(); /* PacketID */

}

void TradeOK::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_TradeOK); /* PacketID: 84 */

}

void TradeOK::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleTradeOK(this);
}

BankOK::BankOK() : ServerPacket(ServerPacketID_BankOK /* 85 */) {
}

BankOK::BankOK(clsByteQueue* buffer) : ServerPacket(ServerPacketID_BankOK /* 85 */) {
    buffer->ReadByte(); /* PacketID */

}

void BankOK::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_BankOK); /* PacketID: 85 */

}

void BankOK::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleBankOK(this);
}

ChangeUserTradeSlot::ChangeUserTradeSlot() : ServerPacket(ServerPacketID_ChangeUserTradeSlot /* 86 */), OfferSlot(), ObjIndex(), Amount(), GrhIndex(), ObjType(), MaxHit(), MinHit(), MaxDef(), MinDef(), Price(), ObjName() {
}

ChangeUserTradeSlot::ChangeUserTradeSlot(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ChangeUserTradeSlot /* 86 */) {
    buffer->ReadByte(); /* PacketID */
    OfferSlot = buffer->ReadByte();
    ObjIndex = buffer->ReadInteger();
    Amount = buffer->ReadLong();
    GrhIndex = buffer->ReadInteger();
    ObjType = buffer->ReadByte();
    MaxHit = buffer->ReadInteger();
    MinHit = buffer->ReadInteger();
    MaxDef = buffer->ReadInteger();
    MinDef = buffer->ReadInteger();
    Price = buffer->ReadLong();
    ObjName = buffer->ReadUnicodeString();

}

ChangeUserTradeSlot::ChangeUserTradeSlot(std::uint8_t OfferSlot_, std::int16_t ObjIndex_, std::int32_t Amount_, std::int16_t GrhIndex_, std::uint8_t ObjType_, std::int16_t MaxHit_, std::int16_t MinHit_, std::int16_t MaxDef_, std::int16_t MinDef_, std::int32_t Price_, const std::string& ObjName_) : ServerPacket(ServerPacketID_ChangeUserTradeSlot /* 86 */), OfferSlot(OfferSlot_), ObjIndex(ObjIndex_), Amount(Amount_), GrhIndex(GrhIndex_), ObjType(ObjType_), MaxHit(MaxHit_), MinHit(MinHit_), MaxDef(MaxDef_), MinDef(MinDef_), Price(Price_), ObjName(ObjName_) {
}

void ChangeUserTradeSlot::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ChangeUserTradeSlot); /* PacketID: 86 */
    buffer->WriteByte(OfferSlot);
    buffer->WriteInteger(ObjIndex);
    buffer->WriteLong(Amount);
    buffer->WriteInteger(GrhIndex);
    buffer->WriteByte(ObjType);
    buffer->WriteInteger(MaxHit);
    buffer->WriteInteger(MinHit);
    buffer->WriteInteger(MaxDef);
    buffer->WriteInteger(MinDef);
    buffer->WriteLong(Price);
    buffer->WriteUnicodeString(ObjName);

}

void ChangeUserTradeSlot::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleChangeUserTradeSlot(this);
}

SendNight::SendNight() : ServerPacket(ServerPacketID_SendNight /* 87 */), Night() {
}

SendNight::SendNight(clsByteQueue* buffer) : ServerPacket(ServerPacketID_SendNight /* 87 */) {
    buffer->ReadByte(); /* PacketID */
    Night = buffer->ReadBoolean();

}

SendNight::SendNight(bool Night_) : ServerPacket(ServerPacketID_SendNight /* 87 */), Night(Night_) {
}

void SendNight::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_SendNight); /* PacketID: 87 */
    buffer->WriteBoolean(Night);

}

void SendNight::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleSendNight(this);
}

Pong::Pong() : ServerPacket(ServerPacketID_Pong /* 88 */) {
}

Pong::Pong(clsByteQueue* buffer) : ServerPacket(ServerPacketID_Pong /* 88 */) {
    buffer->ReadByte(); /* PacketID */

}

void Pong::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_Pong); /* PacketID: 88 */

}

void Pong::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handlePong(this);
}

UpdateTagAndStatus::UpdateTagAndStatus() : ServerPacket(ServerPacketID_UpdateTagAndStatus /* 89 */), CharIndex(), NickColor(), Tag() {
}

UpdateTagAndStatus::UpdateTagAndStatus(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UpdateTagAndStatus /* 89 */) {
    buffer->ReadByte(); /* PacketID */
    CharIndex = buffer->ReadInteger();
    NickColor = buffer->ReadByte();
    Tag = buffer->ReadUnicodeString();

}

UpdateTagAndStatus::UpdateTagAndStatus(std::int16_t CharIndex_, std::uint8_t NickColor_, const std::string& Tag_) : ServerPacket(ServerPacketID_UpdateTagAndStatus /* 89 */), CharIndex(CharIndex_), NickColor(NickColor_), Tag(Tag_) {
}

void UpdateTagAndStatus::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UpdateTagAndStatus); /* PacketID: 89 */
    buffer->WriteInteger(CharIndex);
    buffer->WriteByte(NickColor);
    buffer->WriteUnicodeString(Tag);

}

void UpdateTagAndStatus::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUpdateTagAndStatus(this);
}

SpawnList::SpawnList() : ServerPacket(ServerPacketID_SpawnList /* 90 */), Data() {
}

SpawnList::SpawnList(clsByteQueue* buffer) : ServerPacket(ServerPacketID_SpawnList /* 90 */) {
    buffer->ReadByte(); /* PacketID */
    Data = buffer->ReadUnicodeString();

}

SpawnList::SpawnList(const std::string& Data_) : ServerPacket(ServerPacketID_SpawnList /* 90 */), Data(Data_) {
}

void SpawnList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_SpawnList); /* PacketID: 90 */
    buffer->WriteUnicodeString(Data);

}

void SpawnList::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleSpawnList(this);
}

ShowSOSForm::ShowSOSForm() : ServerPacket(ServerPacketID_ShowSOSForm /* 91 */), Data() {
}

ShowSOSForm::ShowSOSForm(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ShowSOSForm /* 91 */) {
    buffer->ReadByte(); /* PacketID */
    Data = buffer->ReadUnicodeString();

}

ShowSOSForm::ShowSOSForm(const std::string& Data_) : ServerPacket(ServerPacketID_ShowSOSForm /* 91 */), Data(Data_) {
}

void ShowSOSForm::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ShowSOSForm); /* PacketID: 91 */
    buffer->WriteUnicodeString(Data);

}

void ShowSOSForm::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleShowSOSForm(this);
}

ShowMOTDEditionForm::ShowMOTDEditionForm() : ServerPacket(ServerPacketID_ShowMOTDEditionForm /* 92 */), Data() {
}

ShowMOTDEditionForm::ShowMOTDEditionForm(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ShowMOTDEditionForm /* 92 */) {
    buffer->ReadByte(); /* PacketID */
    Data = buffer->ReadUnicodeString();

}

ShowMOTDEditionForm::ShowMOTDEditionForm(const std::string& Data_) : ServerPacket(ServerPacketID_ShowMOTDEditionForm /* 92 */), Data(Data_) {
}

void ShowMOTDEditionForm::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ShowMOTDEditionForm); /* PacketID: 92 */
    buffer->WriteUnicodeString(Data);

}

void ShowMOTDEditionForm::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleShowMOTDEditionForm(this);
}

ShowGMPanelForm::ShowGMPanelForm() : ServerPacket(ServerPacketID_ShowGMPanelForm /* 93 */) {
}

ShowGMPanelForm::ShowGMPanelForm(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ShowGMPanelForm /* 93 */) {
    buffer->ReadByte(); /* PacketID */

}

void ShowGMPanelForm::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ShowGMPanelForm); /* PacketID: 93 */

}

void ShowGMPanelForm::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleShowGMPanelForm(this);
}

UserNameList::UserNameList() : ServerPacket(ServerPacketID_UserNameList /* 94 */), Data() {
}

UserNameList::UserNameList(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UserNameList /* 94 */) {
    buffer->ReadByte(); /* PacketID */
    Data = buffer->ReadUnicodeString();

}

UserNameList::UserNameList(const std::string& Data_) : ServerPacket(ServerPacketID_UserNameList /* 94 */), Data(Data_) {
}

void UserNameList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UserNameList); /* PacketID: 94 */
    buffer->WriteUnicodeString(Data);

}

void UserNameList::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUserNameList(this);
}

ShowDenounces::ShowDenounces() : ServerPacket(ServerPacketID_ShowDenounces /* 95 */), Data() {
}

ShowDenounces::ShowDenounces(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ShowDenounces /* 95 */) {
    buffer->ReadByte(); /* PacketID */
    Data = buffer->ReadUnicodeString();

}

ShowDenounces::ShowDenounces(const std::string& Data_) : ServerPacket(ServerPacketID_ShowDenounces /* 95 */), Data(Data_) {
}

void ShowDenounces::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ShowDenounces); /* PacketID: 95 */
    buffer->WriteUnicodeString(Data);

}

void ShowDenounces::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleShowDenounces(this);
}

RecordList::RecordList() : ServerPacket(ServerPacketID_RecordList /* 96 */) {
}

RecordList::RecordList(clsByteQueue* buffer) : ServerPacket(ServerPacketID_RecordList /* 96 */) {
    buffer->ReadByte(); /* PacketID */
    std::int32_t Count = buffer->ReadByte();
    { std::int32_t i; 
        for (i=0; i<Count; ++i) {
            Item e;
            e.Usuario = buffer->ReadUnicodeString();

            Items.push_back(e);
        }
    }
}

void RecordList::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_RecordList); /* PacketID: 96 */
    std::int32_t Count = static_cast<std::int32_t>(Items.size());
    buffer->WriteByte(Count);
    { std::int32_t i; 
        for (i=0; i<Count; ++i) {
            const Item &e = Items[i];
            buffer->WriteUnicodeString(e.Usuario);

        }
    }
}

void RecordList::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleRecordList(this);
}

RecordDetails::RecordDetails() : ServerPacket(ServerPacketID_RecordDetails /* 97 */), Creador(), Motivo(), Online(), IP(), OnlineTime(), Obs() {
}

RecordDetails::RecordDetails(clsByteQueue* buffer) : ServerPacket(ServerPacketID_RecordDetails /* 97 */) {
    buffer->ReadByte(); /* PacketID */
    Creador = buffer->ReadUnicodeString();
    Motivo = buffer->ReadUnicodeString();
    Online = buffer->ReadBoolean();
    IP = buffer->ReadUnicodeString();
    OnlineTime = buffer->ReadUnicodeString();
    Obs = buffer->ReadUnicodeString();

}

RecordDetails::RecordDetails(const std::string& Creador_, const std::string& Motivo_, bool Online_, const std::string& IP_, const std::string& OnlineTime_, const std::string& Obs_) : ServerPacket(ServerPacketID_RecordDetails /* 97 */), Creador(Creador_), Motivo(Motivo_), Online(Online_), IP(IP_), OnlineTime(OnlineTime_), Obs(Obs_) {
}

void RecordDetails::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_RecordDetails); /* PacketID: 97 */
    buffer->WriteUnicodeString(Creador);
    buffer->WriteUnicodeString(Motivo);
    buffer->WriteBoolean(Online);
    buffer->WriteUnicodeString(IP);
    buffer->WriteUnicodeString(OnlineTime);
    buffer->WriteUnicodeString(Obs);

}

void RecordDetails::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleRecordDetails(this);
}

ShowGuildAlign::ShowGuildAlign() : ServerPacket(ServerPacketID_ShowGuildAlign /* 98 */) {
}

ShowGuildAlign::ShowGuildAlign(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ShowGuildAlign /* 98 */) {
    buffer->ReadByte(); /* PacketID */

}

void ShowGuildAlign::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ShowGuildAlign); /* PacketID: 98 */

}

void ShowGuildAlign::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleShowGuildAlign(this);
}

ShowPartyForm::ShowPartyForm() : ServerPacket(ServerPacketID_ShowPartyForm /* 99 */), EsLider(), Data(), Exp() {
}

ShowPartyForm::ShowPartyForm(clsByteQueue* buffer) : ServerPacket(ServerPacketID_ShowPartyForm /* 99 */) {
    buffer->ReadByte(); /* PacketID */
    EsLider = buffer->ReadByte();
    Data = buffer->ReadUnicodeString();
    Exp = buffer->ReadLong();

}

ShowPartyForm::ShowPartyForm(std::uint8_t EsLider_, const std::string& Data_, std::int32_t Exp_) : ServerPacket(ServerPacketID_ShowPartyForm /* 99 */), EsLider(EsLider_), Data(Data_), Exp(Exp_) {
}

void ShowPartyForm::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_ShowPartyForm); /* PacketID: 99 */
    buffer->WriteByte(EsLider);
    buffer->WriteUnicodeString(Data);
    buffer->WriteLong(Exp);

}

void ShowPartyForm::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleShowPartyForm(this);
}

UpdateStrenghtAndDexterity::UpdateStrenghtAndDexterity() : ServerPacket(ServerPacketID_UpdateStrenghtAndDexterity /* 100 */), Fuerza(), Agilidad() {
}

UpdateStrenghtAndDexterity::UpdateStrenghtAndDexterity(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UpdateStrenghtAndDexterity /* 100 */) {
    buffer->ReadByte(); /* PacketID */
    Fuerza = buffer->ReadByte();
    Agilidad = buffer->ReadByte();

}

UpdateStrenghtAndDexterity::UpdateStrenghtAndDexterity(std::uint8_t Fuerza_, std::uint8_t Agilidad_) : ServerPacket(ServerPacketID_UpdateStrenghtAndDexterity /* 100 */), Fuerza(Fuerza_), Agilidad(Agilidad_) {
}

void UpdateStrenghtAndDexterity::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UpdateStrenghtAndDexterity); /* PacketID: 100 */
    buffer->WriteByte(Fuerza);
    buffer->WriteByte(Agilidad);

}

void UpdateStrenghtAndDexterity::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUpdateStrenghtAndDexterity(this);
}

UpdateStrenght::UpdateStrenght() : ServerPacket(ServerPacketID_UpdateStrenght /* 101 */), Fuerza() {
}

UpdateStrenght::UpdateStrenght(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UpdateStrenght /* 101 */) {
    buffer->ReadByte(); /* PacketID */
    Fuerza = buffer->ReadByte();

}

UpdateStrenght::UpdateStrenght(std::uint8_t Fuerza_) : ServerPacket(ServerPacketID_UpdateStrenght /* 101 */), Fuerza(Fuerza_) {
}

void UpdateStrenght::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UpdateStrenght); /* PacketID: 101 */
    buffer->WriteByte(Fuerza);

}

void UpdateStrenght::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUpdateStrenght(this);
}

UpdateDexterity::UpdateDexterity() : ServerPacket(ServerPacketID_UpdateDexterity /* 102 */), Agilidad() {
}

UpdateDexterity::UpdateDexterity(clsByteQueue* buffer) : ServerPacket(ServerPacketID_UpdateDexterity /* 102 */) {
    buffer->ReadByte(); /* PacketID */
    Agilidad = buffer->ReadByte();

}

UpdateDexterity::UpdateDexterity(std::uint8_t Agilidad_) : ServerPacket(ServerPacketID_UpdateDexterity /* 102 */), Agilidad(Agilidad_) {
}

void UpdateDexterity::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_UpdateDexterity); /* PacketID: 102 */
    buffer->WriteByte(Agilidad);

}

void UpdateDexterity::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleUpdateDexterity(this);
}

AddSlots::AddSlots() : ServerPacket(ServerPacketID_AddSlots /* 103 */), Mochila() {
}

AddSlots::AddSlots(clsByteQueue* buffer) : ServerPacket(ServerPacketID_AddSlots /* 103 */) {
    buffer->ReadByte(); /* PacketID */
    Mochila = buffer->ReadByte();

}

AddSlots::AddSlots(std::uint8_t Mochila_) : ServerPacket(ServerPacketID_AddSlots /* 103 */), Mochila(Mochila_) {
}

void AddSlots::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_AddSlots); /* PacketID: 103 */
    buffer->WriteByte(Mochila);

}

void AddSlots::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleAddSlots(this);
}

MultiMessage::MultiMessage() : ServerPacket(ServerPacketID_MultiMessage /* 104 */) {
}

MultiMessage::MultiMessage(clsByteQueue* buffer) : ServerPacket(ServerPacketID_MultiMessage /* 104 */) {
    buffer->ReadByte(); /* PacketID */

}

void MultiMessage::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_MultiMessage); /* PacketID: 104 */

}

void MultiMessage::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleMultiMessage(this);
}

StopWorking::StopWorking() : ServerPacket(ServerPacketID_StopWorking /* 105 */) {
}

StopWorking::StopWorking(clsByteQueue* buffer) : ServerPacket(ServerPacketID_StopWorking /* 105 */) {
    buffer->ReadByte(); /* PacketID */

}

void StopWorking::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_StopWorking); /* PacketID: 105 */

}

void StopWorking::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleStopWorking(this);
}

CancelOfferItem::CancelOfferItem() : ServerPacket(ServerPacketID_CancelOfferItem /* 106 */), Slot() {
}

CancelOfferItem::CancelOfferItem(clsByteQueue* buffer) : ServerPacket(ServerPacketID_CancelOfferItem /* 106 */) {
    buffer->ReadByte(); /* PacketID */
    Slot = buffer->ReadByte();

}

CancelOfferItem::CancelOfferItem(std::uint8_t Slot_) : ServerPacket(ServerPacketID_CancelOfferItem /* 106 */), Slot(Slot_) {
}

void CancelOfferItem::serialize(clsByteQueue* buffer) const {
    buffer->WriteByte(ServerPacketID_CancelOfferItem); /* PacketID: 106 */
    buffer->WriteByte(Slot);

}

void CancelOfferItem::dispatch(PacketHandler* d) {
    d->getPacketHandlerServerPacket()->handleCancelOfferItem(this);
}

ServerPacketHandler::~ServerPacketHandler() {}

void ServerPacketHandler::handleLogged(Logged* p){ (void)p; }
void ServerPacketHandler::handleRemoveDialogs(RemoveDialogs* p){ (void)p; }
void ServerPacketHandler::handleRemoveCharDialog(RemoveCharDialog* p){ (void)p; }
void ServerPacketHandler::handleNavigateToggle(NavigateToggle* p){ (void)p; }
void ServerPacketHandler::handleDisconnect(Disconnect* p){ (void)p; }
void ServerPacketHandler::handleCommerceEnd(CommerceEnd* p){ (void)p; }
void ServerPacketHandler::handleBankEnd(BankEnd* p){ (void)p; }
void ServerPacketHandler::handleCommerceInit(CommerceInit* p){ (void)p; }
void ServerPacketHandler::handleBankInit(BankInit* p){ (void)p; }
void ServerPacketHandler::handleUserCommerceInit(UserCommerceInit* p){ (void)p; }
void ServerPacketHandler::handleUserCommerceEnd(UserCommerceEnd* p){ (void)p; }
void ServerPacketHandler::handleUserOfferConfirm(UserOfferConfirm* p){ (void)p; }
void ServerPacketHandler::handleCommerceChat(CommerceChat* p){ (void)p; }
void ServerPacketHandler::handleShowBlacksmithForm(ShowBlacksmithForm* p){ (void)p; }
void ServerPacketHandler::handleShowCarpenterForm(ShowCarpenterForm* p){ (void)p; }
void ServerPacketHandler::handleUpdateSta(UpdateSta* p){ (void)p; }
void ServerPacketHandler::handleUpdateMana(UpdateMana* p){ (void)p; }
void ServerPacketHandler::handleUpdateHP(UpdateHP* p){ (void)p; }
void ServerPacketHandler::handleUpdateGold(UpdateGold* p){ (void)p; }
void ServerPacketHandler::handleUpdateBankGold(UpdateBankGold* p){ (void)p; }
void ServerPacketHandler::handleUpdateExp(UpdateExp* p){ (void)p; }
void ServerPacketHandler::handleChangeMap(ChangeMap* p){ (void)p; }
void ServerPacketHandler::handlePosUpdate(PosUpdate* p){ (void)p; }
void ServerPacketHandler::handleChatOverHead(ChatOverHead* p){ (void)p; }
void ServerPacketHandler::handleConsoleMsg(ConsoleMsg* p){ (void)p; }
void ServerPacketHandler::handleGuildChat(GuildChat* p){ (void)p; }
void ServerPacketHandler::handleShowMessageBox(ShowMessageBox* p){ (void)p; }
void ServerPacketHandler::handleUserIndexInServer(UserIndexInServer* p){ (void)p; }
void ServerPacketHandler::handleUserCharIndexInServer(UserCharIndexInServer* p){ (void)p; }
void ServerPacketHandler::handleCharacterCreate(CharacterCreate* p){ (void)p; }
void ServerPacketHandler::handleCharacterRemove(CharacterRemove* p){ (void)p; }
void ServerPacketHandler::handleCharacterChangeNick(CharacterChangeNick* p){ (void)p; }
void ServerPacketHandler::handleCharacterMove(CharacterMove* p){ (void)p; }
void ServerPacketHandler::handleForceCharMove(ForceCharMove* p){ (void)p; }
void ServerPacketHandler::handleCharacterChange(CharacterChange* p){ (void)p; }
void ServerPacketHandler::handleObjectCreate(ObjectCreate* p){ (void)p; }
void ServerPacketHandler::handleObjectDelete(ObjectDelete* p){ (void)p; }
void ServerPacketHandler::handleBlockPosition(BlockPosition* p){ (void)p; }
void ServerPacketHandler::handlePlayMidi(PlayMidi* p){ (void)p; }
void ServerPacketHandler::handlePlayWave(PlayWave* p){ (void)p; }
void ServerPacketHandler::handleGuildList(GuildList* p){ (void)p; }
void ServerPacketHandler::handleAreaChanged(AreaChanged* p){ (void)p; }
void ServerPacketHandler::handlePauseToggle(PauseToggle* p){ (void)p; }
void ServerPacketHandler::handleRainToggle(RainToggle* p){ (void)p; }
void ServerPacketHandler::handleCreateFX(CreateFX* p){ (void)p; }
void ServerPacketHandler::handleUpdateUserStats(UpdateUserStats* p){ (void)p; }
void ServerPacketHandler::handleWorkRequestTarget(WorkRequestTarget* p){ (void)p; }
void ServerPacketHandler::handleChangeInventorySlot(ChangeInventorySlot* p){ (void)p; }
void ServerPacketHandler::handleChangeBankSlot(ChangeBankSlot* p){ (void)p; }
void ServerPacketHandler::handleChangeSpellSlot(ChangeSpellSlot* p){ (void)p; }
void ServerPacketHandler::handleAtributes(Atributes* p){ (void)p; }
void ServerPacketHandler::handleBlacksmithWeapons(BlacksmithWeapons* p){ (void)p; }
void ServerPacketHandler::handleBlacksmithArmors(BlacksmithArmors* p){ (void)p; }
void ServerPacketHandler::handleCarpenterObjects(CarpenterObjects* p){ (void)p; }
void ServerPacketHandler::handleRestOK(RestOK* p){ (void)p; }
void ServerPacketHandler::handleErrorMsg(ErrorMsg* p){ (void)p; }
void ServerPacketHandler::handleBlind(Blind* p){ (void)p; }
void ServerPacketHandler::handleDumb(Dumb* p){ (void)p; }
void ServerPacketHandler::handleShowSignal(ShowSignal* p){ (void)p; }
void ServerPacketHandler::handleChangeNPCInventorySlot(ChangeNPCInventorySlot* p){ (void)p; }
void ServerPacketHandler::handleUpdateHungerAndThirst(UpdateHungerAndThirst* p){ (void)p; }
void ServerPacketHandler::handleFame(Fame* p){ (void)p; }
void ServerPacketHandler::handleMiniStats(MiniStats* p){ (void)p; }
void ServerPacketHandler::handleLevelUp(LevelUp* p){ (void)p; }
void ServerPacketHandler::handleAddForumMsg(AddForumMsg* p){ (void)p; }
void ServerPacketHandler::handleShowForumForm(ShowForumForm* p){ (void)p; }
void ServerPacketHandler::handleSetInvisible(SetInvisible* p){ (void)p; }
void ServerPacketHandler::handleDiceRoll(DiceRoll* p){ (void)p; }
void ServerPacketHandler::handleMeditateToggle(MeditateToggle* p){ (void)p; }
void ServerPacketHandler::handleBlindNoMore(BlindNoMore* p){ (void)p; }
void ServerPacketHandler::handleDumbNoMore(DumbNoMore* p){ (void)p; }
void ServerPacketHandler::handleSendSkills(SendSkills* p){ (void)p; }
void ServerPacketHandler::handleTrainerCreatureList(TrainerCreatureList* p){ (void)p; }
void ServerPacketHandler::handleGuildNews(GuildNews* p){ (void)p; }
void ServerPacketHandler::handleOfferDetails(OfferDetails* p){ (void)p; }
void ServerPacketHandler::handleAlianceProposalsList(AlianceProposalsList* p){ (void)p; }
void ServerPacketHandler::handlePeaceProposalsList(PeaceProposalsList* p){ (void)p; }
void ServerPacketHandler::handleCharacterInfo(CharacterInfo* p){ (void)p; }
void ServerPacketHandler::handleGuildLeaderInfo(GuildLeaderInfo* p){ (void)p; }
void ServerPacketHandler::handleGuildMemberInfo(GuildMemberInfo* p){ (void)p; }
void ServerPacketHandler::handleGuildDetails(GuildDetails* p){ (void)p; }
void ServerPacketHandler::handleShowGuildFundationForm(ShowGuildFundationForm* p){ (void)p; }
void ServerPacketHandler::handleParalizeOK(ParalizeOK* p){ (void)p; }
void ServerPacketHandler::handleShowUserRequest(ShowUserRequest* p){ (void)p; }
void ServerPacketHandler::handleTradeOK(TradeOK* p){ (void)p; }
void ServerPacketHandler::handleBankOK(BankOK* p){ (void)p; }
void ServerPacketHandler::handleChangeUserTradeSlot(ChangeUserTradeSlot* p){ (void)p; }
void ServerPacketHandler::handleSendNight(SendNight* p){ (void)p; }
void ServerPacketHandler::handlePong(Pong* p){ (void)p; }
void ServerPacketHandler::handleUpdateTagAndStatus(UpdateTagAndStatus* p){ (void)p; }
void ServerPacketHandler::handleSpawnList(SpawnList* p){ (void)p; }
void ServerPacketHandler::handleShowSOSForm(ShowSOSForm* p){ (void)p; }
void ServerPacketHandler::handleShowMOTDEditionForm(ShowMOTDEditionForm* p){ (void)p; }
void ServerPacketHandler::handleShowGMPanelForm(ShowGMPanelForm* p){ (void)p; }
void ServerPacketHandler::handleUserNameList(UserNameList* p){ (void)p; }
void ServerPacketHandler::handleShowDenounces(ShowDenounces* p){ (void)p; }
void ServerPacketHandler::handleRecordList(RecordList* p){ (void)p; }
void ServerPacketHandler::handleRecordDetails(RecordDetails* p){ (void)p; }
void ServerPacketHandler::handleShowGuildAlign(ShowGuildAlign* p){ (void)p; }
void ServerPacketHandler::handleShowPartyForm(ShowPartyForm* p){ (void)p; }
void ServerPacketHandler::handleUpdateStrenghtAndDexterity(UpdateStrenghtAndDexterity* p){ (void)p; }
void ServerPacketHandler::handleUpdateStrenght(UpdateStrenght* p){ (void)p; }
void ServerPacketHandler::handleUpdateDexterity(UpdateDexterity* p){ (void)p; }
void ServerPacketHandler::handleAddSlots(AddSlots* p){ (void)p; }
void ServerPacketHandler::handleMultiMessage(MultiMessage* p){ (void)p; }
void ServerPacketHandler::handleStopWorking(StopWorking* p){ (void)p; }
void ServerPacketHandler::handleCancelOfferItem(CancelOfferItem* p){ (void)p; }

}

}
}
